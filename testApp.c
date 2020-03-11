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
#include <stdio.h>
#include "CommandParser/libcli.h"

extern graph_t *build_first_topo();
extern void nw_init_cli();
graph_t *topo = NULL;

int main(int argc, char **argv){
    nw_init_cli();
    topo = build_first_topo();
    //dump_nw_graph(topo);
    start_shell();
    return 0;
}
