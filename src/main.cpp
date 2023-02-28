#include "main.h"
#include "result.cpp"

int main(int argc, char* argv[]) {

    for (int j = 1; j <= 100; j++){

        restaurant* r = new restaurant();

        //initialize table with ID, name and age
        for (int i = 1; i <= MAXSIZE; i++)
        {
            r->recentTable = r->insert(r->recentTable,i,"",0);
        }
        string fileName = "input" + to_string(j) + ".txt";
        simulate(fileName, r, j);
        delete r;
    }

    return 0;
}
