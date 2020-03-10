/*
 * =====================================================================================
 *
 *       Filename:  testApp.c
 *
 *       Description:  This file represents the Test application to test graph topology creation
 *
 *
 *        Version:  1.0
 *        Created:  3/7/2020
 *        Revision:  1.0
 *        Compiler:  gcc
 *
 *        Author: Jamil Hasibul
 *        Company:  Southern Illinois University Carbondale
 *
 *
 * =====================================================================================
 */


#include "graph.h"

extern graph_t *build_first_topo();

int main(int argc, char **argv){

    graph_t *topo = build_first_topo();
    dump_nw_graph(topo);
    return 0;
}
