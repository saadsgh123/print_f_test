#include "main.h"
int main() {
    int len;
    len = _printf("%s%c%c%c%s%%%s%c","Loading",'.','.','.'," 99","Please wait", '\n');
    _printf("%s%c%c%c%s%%%s%c","Loading",'.','.','.'," 99","Please wait", '\n');
    _printf("%d", len);


    _printf("%%\n");
    _printf("%%\n");

    _printf("%c%cth%s%s a%cg%s: Y%sou %s no%ching%s Snow. %c", 'W', 'i', "some", "more",'r',"s","","know",'t',", jon",'\n');
    _printf("%c%cth%s%s a%cg%s: Y%sou %s no%ching%s Snow. %c", 'W', 'i', "some", "more",'r',"s","","know",'t',", jon",'\n');

    return 0;
}
