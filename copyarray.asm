	ORG	0
BEGIN	LDX	=0,1	.LDX is 'i'
	LDA	=0
LOOP	LDX	TMP,1	.set ldx as 'i'
	LDA	ARR,1	.load array[i] into acc
	STA	NEWARR,1	.store array[i] in newarray[i]
	LDA	TMP	.load i into acc
	ADD	ONE	.increment acc
	STA	TMP	.set i as incremented value
	ADD	NEG10
	BIN	LOOP	.test if i<9
	HLT
TMP	BSC	0
ONE	BSC	1
NEG10	BSC	-10
ARR	BSC	15,31,47,63,79,95,111,127,143,159
NEWARR	BSS	10
	END	START
