// Copyright 2020 Your Name <your_email>

#include "Downloader.hpp"
#include "Parametrs.hpp"
#include "Parser.hpp"

void Run_crauler(int argc, char* argv[]) {
  prepare_command_line(argc, argv);
  printParametrs();
  Downloader d(parametrs.downloader_threads);
  Parser p(parametrs.parser_threads);
  d.downloading(parametrs.url, parametrs.depth, p);
}

