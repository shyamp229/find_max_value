.data
# DO NOT change the following three labels (you may change the initial values):
ConfidenceValues:     .word 1, 70, 0, 0, 21, 2, 3, 0, 3, 0
ClassID: .alloc 1
	
.text
                # write your code here...
          
        Start:  addi $01, $00, 0                   # ClassID = 0
                addi $02, $00, 0                   # i = 0    
                lw   $04, ConfidenceValues($00)    # MaxValue = ConfidenceValues[0]
         Loop:  slti $05, $02, 40                  # if i < 10?
                beq  $05, $00, Exit                # if not Exit
                lw   $06, ConfidenceValues($02)    # $6 = conf. value[i]
                slt  $05, $06, $04                 # if conf. value[I]< maxvalue
                bne  $05, $00, Continue            # then conf.value[I] = max value
                add  $04, $00, $06                 # stores conf. Value[i] = max value
                add  $01, $00, $02                 # ClassID = i
                sra  $01, $01, 2                   # dividing $1 by 4
                sw   $01, ClassID($00)             # Storing value of $1 into ClassID
      Continue: addi $02, $02, 4                   # inc. i
                j    Loop
                     
         Exit:  jr   $31                           # return to OS


