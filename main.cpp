#include <iostream>
#include "Pockemon.h"
#include "WarPoc.h"
#include "MagicPok.h"
#include "FirePoc.h"
#include <string>
#include <fstream>

int main() {
    std::fstream fs;

    WarPoc warPoc = WarPoc(100, 10, 35, "WarPoc1", "MagicPoc");
    MagicPok magicPok = MagicPok(200, 5, 80, "MagikPoc1", "WarPoc");
    FirePoc firePoc = FirePoc(300, 100, 50, "Firepoc1", "WarPoc");

    magicPok.fight(100);
//    magicPok.print_info();
    magicPok.print_to_xml();
    warPoc.print_to_xml();
    firePoc.print_to_xml();

    return 0;
}
