# Proposta de Engenharia: Software de Modelagem Geoquímica de TOC

## Visão Geral
Como solicitados, preparamos esta proposta para o desenvolvimento do software de análise de Carbono Orgânico Total (TOC). Entendemos que a principal dor é trabalhar com os **dados de calha**, que vêm sempre ruidosos, dificultando a análise direta das janelas de geração de hidrocarbonetos.

## Nossa Solução Técnica
A nossa equipe propõe desenvolver uma ferramenta CLI (modo terminal) focada 100% em processamento matemático rápido. O fluxo será:
1. **Leitura e Tratamento:** Receber os dados da calha e passar por um filtro de **Média Móvel Estatística**. Isso vai tirar os "picos" errados (ruído).
2. **Interpolação:** Em cima do dado suavizado, vamos aplicar uma **Interpolação Polinomial de 3º Grau**. A ideia aqui é encontrar a curva suave do gradiente de maturação.
3. **Identificação da Janela:** Com a curva matemática resolvida, fica simples pro sistema apontar onde estão as janelas de geração de óleo e gás, que é o que o geólogo precisa ver no final.

## Requisitos de Performance
Como o processamento pode lidar com arquivos grandes (dependendo da amostragem do poço) e precisamos focar em eficiência energética, vamos modelar o sistema usando **C++ moderno (C++26)**, adotando boas práticas de Encapsulamento e Orientação a Objetos.

## Prazos e Cronograma
Aceitamos as condições de Sprints definidas no escopo geral. Os diagramas UML cobrirão a visão estática e dinâmica desse processamento. A divisão de tarefas para a apresentação já foi organizada pela equipe.
