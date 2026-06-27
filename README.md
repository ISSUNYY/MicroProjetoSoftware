# Microprojeto de Software - Modelagem Geoquímica de TOC

Repositório do projeto da disciplina de Introdução ao Projeto de Engenharia (UENF/LENEP).

**Professor:** André Duarte Bueno
**Equipe:**
- Davi Dias
- Wellington
- João Coelho

## O Problema (Tema G2)
Nosso grupo ficou responsável pela Modelagem do Carbono Orgânico Total (TOC) para identificar janelas de geração térmica (óleo/gás). O desafio é processar dados de calha que normalmente vêm com bastante ruído. 

Para isso, o software faz dois processos principais:
1. Aplica uma **média móvel estatística** para limpar os ruídos e suavizar a curva.
2. Faz uma **interpolação polinomial de 3º grau** pra ajudar a definir o gradiente de maturação e encontrar as zonas de interesse (onde gera óleo/gás).

## Estrutura do Repositório
A gente organizou as pastas seguindo o modelo exigido (o padrão do LDSC):

- `01-Contrato/`: Tem o contrato de engenharia com os requisitos e nossa proposta inicial.
- `02-DesenvolvimentoDoProduto/`: 
  - `documento/`: Nossas apresentações.
  - `diagramas-uml/`: Todos os diagramas feitos na fase de projeto e análise (Caso de Uso, Classes, Sequência, etc).
  - `src/`: Ficará o código fonte em C++. A exigência é C++ moderno pra ter mais desempenho.
  - `test/`: Arquivos de testes unitários.
- `03-Apresentacao/`: Divisão de quem fez o que e os slides pra apresentação final.

## Requisitos Iniciais (Resumo)
- Pegar arquivo de dados de calha.
- Processar os dados matematicamente (Cálculos de Média e Interpolação).
- Exibir ou gerar relatório de onde estão as janelas de geração.
- Tudo isso feito com Orientação a Objetos limpa (C++ encapsulado) e em modo terminal.

## Metodologia
A gente utilizou a metodologia de projeto orientado a objetos baseada no Rumbaugh e Blaha. Todo o sistema foi pensado antes, através dos diagramas UML, separando a parte de interface, os cálculos e as regras de negócio antes de ir pro código.

---
*Laboratório de Engenharia e Exploração de Petróleo - UENF*
