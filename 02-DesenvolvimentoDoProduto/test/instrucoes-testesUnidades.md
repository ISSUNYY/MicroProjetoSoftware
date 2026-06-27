# Instruções de Testes de Unidade

Este diretório vai guardar os testes de unidade das classes do nosso simulador de TOC. 
Como ainda estamos na fase de projeto de engenharia de software (modelagem), o código no diretório `src/` é apenas um esqueleto (stub) para demonstrar a arquitetura definida.

## Ferramentas
Quando formos implementar de verdade, vamos utilizar a biblioteca **Google Test (GTest)** para testar cada componente separado:

1. **Testar `CMediaMovel`:** Passar um vetor com muito ruído e verificar se a saída está suave e com a média matemática correta para a janela.
2. **Testar `CInterpolador`:** Passar pontos conhecidos de um polinômio de 3º grau e checar se o algoritmo resolve os coeficientes e plota a curva certinho.
3. **Testar leitura de arquivo:** Validar o que acontece quando joga um `.csv` corrompido ou vazio (isso bate com o nosso fluxo de exceção no diagrama de sequência).
