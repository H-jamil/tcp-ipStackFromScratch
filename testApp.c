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
#include "comm.h"
#include <stdio.h>
#include "CommandParser/libcli.h"

extern graph_t *build_first_topo();
extern void nw_init_cli();
graph_t *topo = NULL;

int main(int argc, char **argv){
    nw_init_cli();
    topo = build_first_topo();
    //dump_nw_graph(topo);
    sleep(2);
    char data[]="Hello DamDam\0";
    node_t *snode=get_node_by_node_name(topo,"R0_re");
    interface_t *oif = get_node_if_by_name(snode, "eth0/0");
    //assert(oif);
    send_pkt_out(data,strlen(data),oif);
    printf("Message Sent\n");
    start_shell();
    return 0;
}
