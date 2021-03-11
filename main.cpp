//
// Created by paulkokos on 3/11/2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_main.h" resolved

#include "main.h"
#include "ui_main.h"

main::main(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::main) {
    ui->setupUi(this);
}

main::~main() {
    delete ui;
}
