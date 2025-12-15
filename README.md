Relatório do Trabalho prático Programação I

Sistema de Gestão de Biblioteca


Aluno: Valentina Leonarda Fernandes Gonçalves, Nº1709394
1709394_mii_2025_2026, valentinalfernandes@gmail.com

Índice
1.Descrição do trabalho	4
2.Arquitetura do trabalho	5
3.Implementação do trabalho	6
4. Funcionamento do trabalho.	7
4. 1 Inicialização do programa	8
4. 2 Adição de um novo livro	8
4. 3 Listagem dos livros registados	9
4. 4 Pesquisa de um livro	9
4. 5 Remoção de um livro	10
4. 6 Encerramento do programa	10
5. Conclusão	11
Bibliografia	12

Índice de Figuras
Figura 1- Esquema da arquitetura do trabalho	5
Figura 2- Código completo do programa	7
Figura 3- Menu principal do programa	8
Figura 4- Inserção de um livro no Sistema	8
Figura 5- Listagens dos livros existentes no Sistema	9
Figura 6- Pesquisa de um livro pelo título	9
Figura 7- Remoção de um livro do Sistema	10
Figura 8- Encerramento do Sistema	10

1.Descrição do trabalho

O objetivo deste trabalho foi desenvolver um sistema de gestão de biblioteca em linguagem C. A ideia principal foi criar um programa capaz de guardar informação sobre livros e permitir ao utilizador realizar três operações básicas: adicionar um livro, pesquisar um livro e remover um livro.
Para isso, foram aplicados vários conceitos que têm sido trabalhados nas aulas, nomeadamente o uso de structs para organizar os dados de cada livro, arrays para armazenar vários registos temporariamente em memória, e ficheiros para guardar tudo de forma permanente. Assim, mesmo que o programa seja fechado, os livros continuam registados no ficheiro de texto criado.
O trabalho acabou por ser uma oportunidade para praticar a divisão do código em funções, o tratamento de dados introduzidos pelo utilizador e o modo como a informação é lida e escrita num ficheiro. A ideia não foi fazer um sistema avançado, mas sim algo simples, funcional e que mostrasse o essencial do que foi pedido pelo professor.

2.Arquitetura do trabalho

O sistema de gestão de biblioteca foi pensado para permitir ao utilizador realizar as funções básicas de forma simples. Quando o programa inicia, mostra um menu com as várias opções disponíveis. Depois disso, o utilizador escolhe o que quer fazer.
As opções principais são: adicionar um livro, listar todos os livros, pesquisar um livro e remover um livro. Cada opção executa a sua tarefa e, no fim, o sistema volta sempre ao menu principal para que o utilizador possa continuar a usar o programa sem ter de o reiniciar.
O fluxograma representa este funcionamento passo a passo, mostrando como o programa começa, como recebe a escolha do utilizador e como percorre cada operação até à saída. Assim, torna-se mais fácil perceber a lógica do sistema e a forma como tudo está organizado.
                        
3.Implementação do trabalho

A implementação do trabalho começou por definir, de forma clara, como o sistema iria funcionar do ponto de vista do utilizador. Antes de escrever qualquer parte do código, foi feito um esquema do fluxo do programa, onde ficaram identificados os passos principais: início, apresentação do menu, escolha da opção e execução da funcionalidade correspondente. Este esquema serviu como base para organizar a estrutura do trabalho e para garantir que todas as operações estavam ligadas entre si de forma lógica.
A primeira funcionalidade desenvolvida foi a de adicionar livro, por ser essencial para o funcionamento do sistema. Nesta fase, determinei quais os dados necessários para cada registo e preparei a estrutura que iria armazenar essa informação. Só depois disso avancei para a listagem de livros, que permitiu confirmar se os dados estavam a ser guardados corretamente e se a apresentação ao utilizador era clara e simples de interpretar.
A funcionalidade de pesquisa foi implementada com o objetivo de tornar o programa mais prático. Aqui, optei por procurar livros através do título, uma vez que é o elemento mais direto e intuitivo para o utilizador. De seguida, tratei da opção de remover livro, garantindo que o programa verificava se o título existia antes de proceder à eliminação, evitando erros ou inconsistências.
Depois de concluídas todas as operações individuais, organizei novamente o menu principal, ligando cada opção às respetivas funções. Também assegurei que, depois de concluída qualquer ação, o programa voltava automaticamente ao menu, permitindo ao utilizador continuar a utilizar o sistema sem ter de reiniciar o trabalho.
Por fim, foi feita uma revisão geral ao funcionamento do programa para confirmar que todas as funcionalidades correspondiam ao esquema inicial e que o fluxo do sistema permanecia coerente do início ao fim. O resultado foi uma implementação simples, funcional e alinhada com os objetivos propostos para o trabalho.


4. Funcionamento do trabalho.
                                             
4. 1 Inicialização do programa
Após a execução do programa, é apresentado ao utilizador um menu principal onde se encontram disponíveis as várias funcionalidades do sistema de gestão da biblioteca. Através deste menu, o utilizador pode selecionar a opção pretendida, como adicionar um novo livro, listar os livros existentes, pesquisar um livro ou remover um registo. Esta estrutura permite uma utilização clara e intuitiva do programa.

4. 2 Adição de um novo livro
Neste passo, o utilizador seleciona a opção de adicionar um novo livro. O programa solicita a introdução do título e do autor, sendo o livro automaticamente registado no sistema com um identificador único. Após a inserção, o programa confirma a operação e regressa ao menu principal, permitindo continuar a utilizar as restantes funcionalidades.   

 
4. 3 Listagem dos livros registados
Ao selecionar a opção de listar livros, o programa apresenta no ecrã todos os livros atualmente registados. Para cada livro é mostrado o respetivo identificador, título e autor, permitindo ao utilizador consultar rapidamente a informação armazenada no sistema.

4. 4 Pesquisa de um livro
Neste passo, o utilizador seleciona a opção de pesquisa e introduz o título do livro que pretende procurar. O programa analisa os livros registados e apresenta no ecrã o livro correspondente, mostrando o seu identificador, título e autor, sempre que exista um registo que corresponda ao termo pesquisado. 

4. 5 Remoção de um livro
Neste passo, o utilizador seleciona a opção de remover livro e introduz o identificador correspondente ao registo que pretende eliminar. O programa verifica a existência do livro e, caso seja encontrado, procede à sua remoção, confirmando a operação com uma mensagem de sucesso.

4. 6 Encerramento do programa
Ao selecionar a opção de saída, o programa termina a sua execução de forma controlada, apresentando uma mensagem de encerramento. Este passo garante que o utilizador sai do sistema de forma segura, concluindo corretamente o funcionamento do programa.
 
5. Conclusão
No geral, consegui fazer aquilo que era pedido para o trabalho. Desenvolvi um pequeno programa que permite gerir livros, onde é possível adicioná-los, removê-los, pesquisá-los e listar tudo o que está guardado. Também tratei da parte de ler e escrever no ficheiro, para que a informação não se perca quando o programa fecha. O menu principal ajuda a organizar as opções e torna o uso do programa mais simples.
Mesmo assim, houve algumas coisas que ficaram por fazer ou que poderiam ter sido melhoradas. Por exemplo, podia ter acrescentado validações mais completas nas entradas do utilizador, ou até funções extra, como editar um livro já existente. No entanto, o essencial foi concluído e o programa cumpre o que era pretendido para este trabalho
  

























