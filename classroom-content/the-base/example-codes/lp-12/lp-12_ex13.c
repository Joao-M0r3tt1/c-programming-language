/*
en-US: EXAMPLE_13.C - Example 13. Mask for switching bits
Statement: The mask for toggling a b bit is based on the fact that b^1 == ~b. For example, to alternate bits 3 and 4 of any byte, we can use the mask 0001 1000, that is, 0x18
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_13.C - Exemplo 13. Máscara para verificar bits
Enunciado: A máscara para verificar se um bit b está ligado é baseada no fato de que b & 1 == b. Por exemplo, para verificar o bit 5 de um byte qualquer, podemos usar a máscara 0010 0000, ou seja, 0x20
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-12.pdf
*/

/*

Byte:   0xAD    (1010 1101)
Mask:   0x20    (0010 0000)  &
_____________________________
Res.:   0x20    (0010 0000)

Byte:   0x8D    (1000 1101)
Mask:   0x20    (0010 0000)  &
_____________________________
Res.:   0x00    (0000 0000)

Obs.: the result of byte & mask is true if and only if the bit is on
*/