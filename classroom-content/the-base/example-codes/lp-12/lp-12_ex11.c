/*
en-US: EXAMPLE_11.C - Example 11. Mask to bind bits
Statement: The mask for turning on a b bit is based on the fact that b | 1 == 1. For example, to turn off bits 0, 1 and 6 of any byte, we can use the mask 0100 0011, that is, 0x43
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_11.C - Exemplo 11. Máscara para ligar bits
Enunciado: A máscara para ligar um bit b é baseada no fato de que b | 1 == 1. Por exemplo, para desligar os bits 0, 1 e 6 de um byte qualquer, podemos usar a máscara 0100 0011, ou seja, 0x43
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-12.pdf
*/

/*

Byte:   0xAD    (1010 1101)
Mask:   0x43    (0100 0011)  |
_____________________________
Res.:   0xEF    (1110 1111)

*/