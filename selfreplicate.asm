	ORG	0
BEGIN	LDA	=0
	LDX	OFFSET,1
LOOP	STA	TMPAC
	LDA*	TMPAC
	STA	DEST,1
	LDA	TMPAC
	ADD	ONE
	TIX	DEST,1
	BRU	LOOP
	HLT
ONE	BSC 	1
TMPAC	BSS	1
OFFSET	BSC	4
DEST	BSS	1
	END	BEGIN
