#include "Date.h"

int main() {
    Date* d = new DateImpl();

    d->input();

    if (d->isValid()) {
        d->printAD();
        d->printROC();
    }
    else {
        cout << "¿ù»~ªº¤é´Á¡I" << endl;
    }

    delete d;
    return 0;
}