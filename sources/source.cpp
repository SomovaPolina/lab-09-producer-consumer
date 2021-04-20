// Copyright 2020 Your Name <your_email>

#include "Downloader.hpp"
#include "Parametrs.hpp"
#include "Parser.hpp"

int main(int argc, char* argv[]) {
  prepare_command_line(argc, argv);
  printParametrs();
  Downloader d(parametrs.downloader_threads);
  Parser p(parametrs.parser_threads);
  d.downloading(parametrs.url, parametrs.depth, p);
}

/*
 ./cmake-build-debug/demo --url https://www.pierreherme.com/macarons \
 --depth 2 --network_threads 4 --parser_threads 4 --output\
 home/polinka/Рабочий стол/labs/lab-09-producer-consumer/output.txt
 */
