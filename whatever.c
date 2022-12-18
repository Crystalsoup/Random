.name dmemp, $20
.name dramp, $19
.name outsz, $18 

.ent OutputOpen
OutputOpen: 
addi dramp, zero, (RSP_OUTPUT_OFFSET
+ RSP_OUTPUT_SIZE8)
add dmemp, outp, outsz
sub dramp, dramp, dmemp
bgez dramp, CurrentFit
nop
WrapBuffer: 
mfc0 dramp, CMD_STATUS
andi dramp, dramp, 0x0400
bne dramp, zero, WrapBuffer
AdvanceCurrent: 
mfc0 dramp, CMD_CURRENT
addi outp, zero, RSP_OUTPUT_OFFSET
beq dramp, outp, AdvanceCurrent
nop
mtc0 outp, CMD_START # reset START
CurrentFit:  
mfc0 dramp, CMD_CURRENT
sub dmemp, outp, dramp
bgez dmemp, OpenDone

add dmemp, outp, outsz
sub dramp, dmemp, dramp
bgez dramp, CurrentFit
nop
OpenDone:
jr return
nop
.end OutputOpen
