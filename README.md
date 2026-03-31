[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/EUQp_XEZ)
## Enunciado

Neste exercício você irá implementar uma versão eficiente da operação de exponenciação inteira `base^exp`.

O arquivo `main.c` já contém a função `pot()`, que calcula `base^exp` por meio de multiplicações sucessivas. Sua tarefa é implementar a função `pot_eficiente()`, que deve produzir o mesmo resultado, mas com um algoritmo mais eficiente.

Para isso, utilize a seguinte propriedade da exponenciação:

```
base^exp = (base^(exp/2))^2          se exp for par
base^exp = base * base^(exp-1)       se exp for ímpar
base^0   = 1
```

### Questões de análise (não é necessário entregar)

Considere `n = exp` como o parâmetro de entrada das funções.

1. Para `n = 1024`, quantas multiplicações cada função realiza? Compare os valores. E para `n = 128`, `n = 512` e `n = 16384`?

2. Escreva a função **T₁(n)** que conta o número exato de multiplicações realizadas por `pot()` em função de `n`.

3. Escreva a função **T₂(n)** de `pot_eficiente()`. Dica: analise separadamente os casos par e ímpar e argumente sobre o pior caso.


### Entrada

Uma única linha com dois inteiros: `base` e `exp`, separados por espaço.

### Saída

Duas linhas: o resultado de `pot()` e o resultado de `pot_eficiente()`, nessa ordem. Os valores devem coincidir.

### Exemplo de entrada e saída

| Entrada  | Saída               |
| :------- | :------------------ |
| 2 10   | 1024<br>1024      |
| 3 1    | 3<br>3             |
| 5 0    | 1<br>1             |
| 2 20   | 1048576<br>1048576 |
| 7 6    | 117649<br>117649   |

---

### Arquivos editáveis (edição de outros arquivos resultará em nota 0)
- `main.c`

### Notas
- Você pode usar qualquer ferramenta offline do computador para editar e compilar seu código
- Não é permitido acessar qualquer página ou ferramenta de Inteligência Artificial para realizar o exercício
- Compile com `make` e teste com `make test`
