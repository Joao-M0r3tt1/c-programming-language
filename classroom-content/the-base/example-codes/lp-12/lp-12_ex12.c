/*
en-US: EXAMPLE_12.C - Example 12. Mask for switching bits
Statement: The mask for toggling a b bit is based on the fact that b^1 == ~b. For example, to alternate bits 3 and 4 of any byte, we can use the mask 0001 1000, that is, 0x18
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_12.C - Exemplo 12. Máscara para alternar bits
Enunciado: A máscara para alternar um bit b é baseada no fato de que b ^ 1 == ~b. Por exemplo, para alternar os bits 3 e 4 de um byte qualquer, podemos usar a máscara 0001 1000, ou seja, 0x18
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-12.pdf
*/

/*

Byte:   0xAD    (1010 1101)
Mask:   0x18    (0001 1000)  ^
_____________________________
Res.:   0xB5    (1011 0101)

*/