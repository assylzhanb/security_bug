#include "libxml/parser.h"
#include "libxml/tree.h"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        return (1);
    }

    xmlInitParser();
   // while (__AFL_LOOP(1000))
    //{
	  xmlDocPtr pointer = xmlReadFile(argv[1], NULL, 0);
	  xmlFreeDoc(pointer);
        // ---------------------------------
        // write your code here
        // ----------------------------------
    //}
    xmlCleanupParser();

    return (0);
}
