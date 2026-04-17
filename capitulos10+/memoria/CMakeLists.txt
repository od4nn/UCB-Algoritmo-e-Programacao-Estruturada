# Define a versão mínima do CMake (o CLion geralmente sugere a que está instalada)
cmake_minimum_required(VERSION 3.20)

# Nome do seu projeto
project(EstudoMemoria C)

# Define o padrão da linguagem C (opcional, mas bom pra disciplina)
set(CMAKE_C_STANDARD 11)

# A mágica acontece aqui:
# add_executable(nome_do_executavel arquivos_fonte)
add_executable(rodar ../aquecimento/potencia/main.c)