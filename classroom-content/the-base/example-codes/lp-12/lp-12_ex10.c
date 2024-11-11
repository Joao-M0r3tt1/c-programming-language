/*
en-US: EXAMPLE_10.C - Example 10. Mask to turn off bits
Statement: The mask to turn off bit b is based on the fact that b & 0 == 0. For example, to turn off bits 0, 4 and 7 of any byte, we can use the mask 0110 1110, that is, 0x6E
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_10.C - Exemplo 10. Máscara para desligar bits
Enunciado: A máscara para desligar um bit b é baseada no fato de que b & 0 == 0. Por exemplo, para desligar os bits 0, 4 e 7 de um byte qualquer, podemos usar a máscara 0110 1110, ou seja, 0x6E
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-12.pdf
*/

/*

Byte:   0xAD    (1010 1101)
Mask:   0x6E    (0110 1110)  &
_____________________________
Res.:   0x2C    (0010 1100)

*/