# Estudo de Caso: C++

## Historico

No ano de 1979, em sua tese de PhD,  Bjarne Stroustup trabalhou muito com a linguagem de programacao _Simula 67_, uma das primeiras a suportar o paradigma orientado a objetos. Bjarne norou que esse paradigma era muito util no desenvolvimento de software, porem a linguagem simula era muito lenta para uso pratico.

Apos isso, Bjarne comecou a trabalhar no o _C com Classes_, um _superset_ da linguagem C que tentava adicionar funcionalidades de linguagens orientada a objetos na linguagem C, que e conhecida pela sua performance e utilidade em programacao de baixo nivel.

O primeiro compilador do _C com classes_ foi chamado de _Cfront_, que tambem foi escrito em _C com classes_. Porem, o _C com Classes_ foi abandonado em 1993 apos se tornar dificilmente extensivel.

Em 1983, o nome da linguagem foi mudado para _C++_. Varias features foram adicionadas junto a essa mudanca, como _funcoes virtuais_, _sobrecarga de funcoes_, referencias a variaveis com o simbolo _&_ e a palavra reservada const.

Em 1985, Stroustup publicou o livro referencia para a linguagem c++, chamado de _The C++ Programming Language_.

Em 1998, o comite de padronizacao do C++ publicou o primeiro padrao inbternacional da linguagem, conhecido como o padrao _C++98_. Em 2003 esse padrao foi revisado, e foram adiconadas mais features na linguagem, mais notavelmente a Standard Template Library (STL), essa versao foi chamada de C++03.

Na metade de 2011, o padrao _C++11_ foi finalizado. A Biblioteca _Boost_ teve um impacto consideravel nas features adicionadas nesse padrao, com ate alguns modulos sendo adicionados diretamente da boost. Algumas das features adicionadas nesse padrao foram o suporte a expressoes regulares, uma biblioteca de randomizacao, uma nova bibliote para trabalhar com tempo, suporte a operacoes atomicas, uma biblioteca de multi threading, uma nova sintaxe de loops for (igual o foreach), a palavra chave auto, novas classes de container, alem de muitas outras.

Atualmente, o padrao vigente e o _C++20_. Algumas das features de padrao sao o operador de comparacao em 3 vias (<=>), melhorias na utilizacao de funcoes lambda, coroutines, modulos e muitas outras.

Existem planos para um padrao futuro chamado _C++23_, com muitas mudancas planejadas.

## Objetivos, Contextualizacao e Caracteristicas

O _C++_ e uma linguagem de alto nivel, com ferramentas para se trabalhar em baixo nivel tambem, compativel com o C e com uma extensivel biblioteca tanto padrao quanto da comunidade.

Ate certo nivel o _C++_ e portavel, pois existem diversos compiladores para varias arquiteturas que fazem com que codigo _C++_ seja compilado e rodado em varias arquitetuas com pouca ou nenhuma modificacao.

### Compilacao

A linguagem _C++_ e compilada, ou seja, o compilador traduz codigo escrito em _C++_ para o codigo de maquina da arquitetura alvo. Essa compilacao e feita de uma so vez. Alem disso, o compilador pode aplicar otimizacoes de codigo, resultando em um codigo de maquina mais rapido e/ou confiavel.

### Nivel de abstracao

A linguagem _C++_ e uma linguagem de programacao de alto nivel, ou seja, oferece uma serie de abstracoes para facilitar o entendimento para humanos, como funcoes e objetos. Porem,  com o _C++_ tambem e possivel realizar manipulacoes de baixo nivel, inclusive sendo uma otima linguagem para isso.

### Sistema de tipos

#### Forte ou Fraca

C++ e fortemente tipada, ou seja, possui bastante restricoes quanto a conversao de tipos entre variaveis. Por exemplo, nao e possivel a conversao entre um _Int_ e um  objeto _Fruit_.

#### Inferencia

O _C++_ suporta tanto a inferencia implicita, que e baseada no contexto que aquela variavel e usada, quanto a inferencia explicita, na qual o programador diz o tipo da variavel.

#### Checagem

Novamente, o _C++_ suporta tanto a checagem estatica quanto a checagem dinamica, ou seja, os seus tipos sao checados em tempo de compilacao e tambem em tempo de execucao.

#### Seguranca de tipos

A linguagem _C++_ nao e _type unsafe_, ou seja, ela leva em consideracao que o programador sabe o que esta fazendo e permite operacoes de conversao de tipos que podem levar a erros em tempo de execucao.

### Paradigmas

A linguagem _C++_ e multi paradigma, ou seja, suporta diversos paradigmas e tecnicas no mesmo programa. Alguns dos paradigmas que o _C++_ suporta sao: Procedural, generico, orientado a objetos e mais recentemente o funcional.

## Tour pela linguagem

### Compiladores

Como dito anteriormente, o compilador e o software que traduz codigo feito em _C++_ para codigo de maquina. Atualmente, os dois compiladores mais maduros de _C++_ sao o _GCC_ e o _Clang (frontend do llvm)_.

Para compilar e rodar um programa em _C++_ podemos rodar no terminal o comando:l

```bash
clang++ -std=c++11 -stdlib=libc++ hello.cpp -o hello
./hello
```

Podemos usar o `Make` para facilitar nossa vida.



## Referencias

https://cplusplus.com/info/history/
https://en.cppreference.com/w/cpp/20
https://www.programmerall.com/article/2405560816/
https://m.cplusplus.com/info/description/
https://m.cplusplus.com/doc/tutorial/introduction/
