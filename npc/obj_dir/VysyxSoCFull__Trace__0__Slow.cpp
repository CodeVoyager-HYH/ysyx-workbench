// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1152,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1153,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1154,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1155,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1156,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1157,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1158,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1159,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1160,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1161,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1162,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1163,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1164,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1165,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1166,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1167,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1168,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1169,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1170,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1171,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1152,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1153,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1154,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1155,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1156,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1157,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1158,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1159,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1160,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1161,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1162,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1163,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1164,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1165,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1166,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1167,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1168,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1169,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1170,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1171,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+773,"spi_sck", false,-1);
    tracep->declBus(c+774,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1172,"spi_mosi", false,-1);
    tracep->declBit(c+1173,"spi_miso", false,-1);
    tracep->declBit(c+1170,"uart_rx", false,-1);
    tracep->declBit(c+1171,"uart_tx", false,-1);
    tracep->declBit(c+1174,"psram_sck", false,-1);
    tracep->declBit(c+1175,"psram_ce_n", false,-1);
    tracep->declBus(c+1129,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1176,"sdram_clk", false,-1);
    tracep->declBit(c+775,"sdram_cke", false,-1);
    tracep->declBit(c+776,"sdram_cs", false,-1);
    tracep->declBit(c+777,"sdram_ras", false,-1);
    tracep->declBit(c+778,"sdram_cas", false,-1);
    tracep->declBit(c+779,"sdram_we", false,-1);
    tracep->declBus(c+780,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+781,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+782,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+783,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1152,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1153,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1154,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1155,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1156,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1157,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1158,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1159,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1160,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1161,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1162,"ps2_clk", false,-1);
    tracep->declBit(c+1163,"ps2_data", false,-1);
    tracep->declBus(c+1164,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1165,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1166,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1167,"vga_hsync", false,-1);
    tracep->declBit(c+1168,"vga_vsync", false,-1);
    tracep->declBit(c+1169,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1018,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+8,"in_psel", false,-1);
    tracep->declBit(c+9,"in_penable", false,-1);
    tracep->declBus(c+1196,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1019,"in_pwrite", false,-1);
    tracep->declBus(c+1020,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1130,"in_pready", false,-1);
    tracep->declBus(c+1131,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1022,"in_pslverr", false,-1);
    tracep->declBus(c+1018,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+8,"out_psel", false,-1);
    tracep->declBit(c+9,"out_penable", false,-1);
    tracep->declBus(c+1196,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1019,"out_pwrite", false,-1);
    tracep->declBus(c+1020,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1130,"out_pready", false,-1);
    tracep->declBus(c+1131,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1022,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+8,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+9,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1019,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1018,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1196,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1020,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1130,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1022,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1131,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+728,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+729,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1019,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1018,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1196,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1020,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+784,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1197,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+785,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+730,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+731,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1019,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1023,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1196,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1020,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1198,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1199,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1200,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+732,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+733,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1019,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1024,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1196,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1020,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1201,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1202,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1203,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+734,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+735,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1019,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1024,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1196,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1020,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1204,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1205,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1206,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1025,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+736,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1019,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1018,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1196,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1020,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1177,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1197,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+10,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1026,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1027,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1019,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1024,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1196,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1020,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1028,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1197,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1178,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1029,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1030,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1019,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1023,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1196,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1020,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+786,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1197,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+787,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1031,"sel_0", false,-1);
    tracep->declBit(c+1032,"sel_1", false,-1);
    tracep->declBit(c+1033,"sel_2", false,-1);
    tracep->declBit(c+1034,"sel_3", false,-1);
    tracep->declBit(c+1035,"sel_4", false,-1);
    tracep->declBit(c+1036,"sel_5", false,-1);
    tracep->declBit(c+1037,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+11,"auto_in_awready", false,-1);
    tracep->declBit(c+12,"auto_in_awvalid", false,-1);
    tracep->declBus(c+13,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+14,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+15,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+16,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+11,"auto_in_wready", false,-1);
    tracep->declBit(c+17,"auto_in_wvalid", false,-1);
    tracep->declBus(c+18,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+19,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+20,"auto_in_bready", false,-1);
    tracep->declBit(c+1132,"auto_in_bvalid", false,-1);
    tracep->declBus(c+21,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1038,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+22,"auto_in_arready", false,-1);
    tracep->declBit(c+23,"auto_in_arvalid", false,-1);
    tracep->declBus(c+24,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+27,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+28,"auto_in_rready", false,-1);
    tracep->declBit(c+1133,"auto_in_rvalid", false,-1);
    tracep->declBus(c+29,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1179,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1038,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+8,"auto_out_psel", false,-1);
    tracep->declBit(c+9,"auto_out_penable", false,-1);
    tracep->declBit(c+1019,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1018,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1020,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1130,"auto_out_pready", false,-1);
    tracep->declBit(c+1022,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1131,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+9,"nodeOut_penable", false,-1);
    tracep->declBus(c+30,"state", false,-1, 1,0);
    tracep->declBit(c+22,"accept_read", false,-1);
    tracep->declBit(c+11,"accept_write", false,-1);
    tracep->declBit(c+31,"is_write_r", false,-1);
    tracep->declBit(c+1019,"is_write", false,-1);
    tracep->declBus(c+29,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+21,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+32,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+33,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+34,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+35,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1039,"resp", false,-1, 1,0);
    tracep->declBus(c+36,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1038,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1133,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+37,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1132,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+38,"auto_in_awready", false,-1);
    tracep->declBit(c+1069,"auto_in_awvalid", false,-1);
    tracep->declBus(c+39,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1070,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1071,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+41,"auto_in_wready", false,-1);
    tracep->declBit(c+1072,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1073,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1074,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"auto_in_wlast", false,-1);
    tracep->declBit(c+738,"auto_in_bready", false,-1);
    tracep->declBit(c+42,"auto_in_bvalid", false,-1);
    tracep->declBus(c+43,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+44,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+45,"auto_in_arready", false,-1);
    tracep->declBit(c+46,"auto_in_arvalid", false,-1);
    tracep->declBus(c+47,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+49,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+51,"auto_in_rready", false,-1);
    tracep->declBit(c+52,"auto_in_rvalid", false,-1);
    tracep->declBus(c+53,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+55,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+56,"auto_in_rlast", false,-1);
    tracep->declBit(c+11,"auto_out_awready", false,-1);
    tracep->declBit(c+12,"auto_out_awvalid", false,-1);
    tracep->declBus(c+13,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+14,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+15,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+16,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+11,"auto_out_wready", false,-1);
    tracep->declBit(c+17,"auto_out_wvalid", false,-1);
    tracep->declBus(c+18,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+19,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+20,"auto_out_bready", false,-1);
    tracep->declBit(c+1132,"auto_out_bvalid", false,-1);
    tracep->declBus(c+21,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1038,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+22,"auto_out_arready", false,-1);
    tracep->declBit(c+23,"auto_out_arvalid", false,-1);
    tracep->declBus(c+24,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+27,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+28,"auto_out_rready", false,-1);
    tracep->declBit(c+1133,"auto_out_rvalid", false,-1);
    tracep->declBus(c+29,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1179,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1038,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+20,"io_enq_ready", false,-1);
    tracep->declBit(c+1132,"io_enq_valid", false,-1);
    tracep->declBus(c+21,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1038,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+738,"io_deq_ready", false,-1);
    tracep->declBit(c+42,"io_deq_valid", false,-1);
    tracep->declBus(c+43,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+44,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+57,"wrap", false,-1);
    tracep->declBit(c+58,"wrap_1", false,-1);
    tracep->declBit(c+59,"maybe_full", false,-1);
    tracep->declBit(c+60,"ptr_match", false,-1);
    tracep->declBit(c+61,"empty", false,-1);
    tracep->declBit(c+62,"full", false,-1);
    tracep->declBit(c+1134,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+58,"R0_addr", false,-1);
    tracep->declBit(c+1207,"R0_en", false,-1);
    tracep->declBit(c+1150,"R0_clk", false,-1);
    tracep->declBus(c+63,"R0_data", false,-1, 5,0);
    tracep->declBit(c+57,"W0_addr", false,-1);
    tracep->declBit(c+1134,"W0_en", false,-1);
    tracep->declBit(c+1150,"W0_clk", false,-1);
    tracep->declBus(c+737,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+64+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+66,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+28,"io_enq_ready", false,-1);
    tracep->declBit(c+1133,"io_enq_valid", false,-1);
    tracep->declBus(c+29,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1179,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1038,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+51,"io_deq_ready", false,-1);
    tracep->declBit(c+52,"io_deq_valid", false,-1);
    tracep->declBus(c+53,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+54,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+55,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+56,"io_deq_bits_last", false,-1);
    tracep->declBit(c+67,"wrap", false,-1);
    tracep->declBit(c+68,"wrap_1", false,-1);
    tracep->declBit(c+69,"maybe_full", false,-1);
    tracep->declBit(c+70,"ptr_match", false,-1);
    tracep->declBit(c+71,"empty", false,-1);
    tracep->declBit(c+72,"full", false,-1);
    tracep->declBit(c+1135,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+68,"R0_addr", false,-1);
    tracep->declBit(c+1207,"R0_en", false,-1);
    tracep->declBit(c+1150,"R0_clk", false,-1);
    tracep->declQuad(c+73,"R0_data", false,-1, 38,0);
    tracep->declBit(c+67,"W0_addr", false,-1);
    tracep->declBit(c+1135,"W0_en", false,-1);
    tracep->declBit(c+1150,"W0_clk", false,-1);
    tracep->declQuad(c+1180,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+75+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+79,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+45,"io_enq_ready", false,-1);
    tracep->declBit(c+46,"io_enq_valid", false,-1);
    tracep->declBus(c+47,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+48,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+49,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+50,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+22,"io_deq_ready", false,-1);
    tracep->declBit(c+23,"io_deq_valid", false,-1);
    tracep->declBus(c+24,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+25,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+26,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+27,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+80,"wrap", false,-1);
    tracep->declBit(c+81,"wrap_1", false,-1);
    tracep->declBit(c+82,"maybe_full", false,-1);
    tracep->declBit(c+83,"ptr_match", false,-1);
    tracep->declBit(c+84,"empty", false,-1);
    tracep->declBit(c+85,"full", false,-1);
    tracep->declBit(c+86,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+81,"R0_addr", false,-1);
    tracep->declBit(c+1207,"R0_en", false,-1);
    tracep->declBit(c+1150,"R0_clk", false,-1);
    tracep->declQuad(c+87,"R0_data", false,-1, 46,0);
    tracep->declBit(c+80,"W0_addr", false,-1);
    tracep->declBit(c+86,"W0_en", false,-1);
    tracep->declBit(c+1150,"W0_clk", false,-1);
    tracep->declQuad(c+89,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+91+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+95,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+38,"io_enq_ready", false,-1);
    tracep->declBit(c+1069,"io_enq_valid", false,-1);
    tracep->declBus(c+39,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1070,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1071,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+40,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+12,"io_deq_valid", false,-1);
    tracep->declBus(c+13,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+14,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+15,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+16,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+96,"wrap", false,-1);
    tracep->declBit(c+97,"wrap_1", false,-1);
    tracep->declBit(c+98,"maybe_full", false,-1);
    tracep->declBit(c+99,"ptr_match", false,-1);
    tracep->declBit(c+100,"empty", false,-1);
    tracep->declBit(c+101,"full", false,-1);
    tracep->declBit(c+1076,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+97,"R0_addr", false,-1);
    tracep->declBit(c+1207,"R0_en", false,-1);
    tracep->declBit(c+1150,"R0_clk", false,-1);
    tracep->declQuad(c+102,"R0_data", false,-1, 46,0);
    tracep->declBit(c+96,"W0_addr", false,-1);
    tracep->declBit(c+1076,"W0_en", false,-1);
    tracep->declBit(c+1150,"W0_clk", false,-1);
    tracep->declQuad(c+739,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+104+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+108,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+41,"io_enq_ready", false,-1);
    tracep->declBit(c+1072,"io_enq_valid", false,-1);
    tracep->declBus(c+1073,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1074,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1075,"io_enq_bits_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+17,"io_deq_valid", false,-1);
    tracep->declBus(c+18,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+19,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+109,"wrap", false,-1);
    tracep->declBit(c+110,"wrap_1", false,-1);
    tracep->declBit(c+111,"maybe_full", false,-1);
    tracep->declBit(c+112,"ptr_match", false,-1);
    tracep->declBit(c+113,"empty", false,-1);
    tracep->declBit(c+114,"full", false,-1);
    tracep->declBit(c+1077,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+110,"R0_addr", false,-1);
    tracep->declBit(c+1207,"R0_en", false,-1);
    tracep->declBit(c+1150,"R0_clk", false,-1);
    tracep->declQuad(c+115,"R0_data", false,-1, 35,0);
    tracep->declBit(c+109,"W0_addr", false,-1);
    tracep->declBit(c+1077,"W0_en", false,-1);
    tracep->declBit(c+1150,"W0_clk", false,-1);
    tracep->declQuad(c+1078,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+117+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+121,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+122,"auto_in_awready", false,-1);
    tracep->declBit(c+1080,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1208,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1081,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1209,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1082,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1210,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+123,"auto_in_wready", false,-1);
    tracep->declBit(c+1083,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1084,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1085,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1207,"auto_in_wlast", false,-1);
    tracep->declBit(c+1182,"auto_in_bready", false,-1);
    tracep->declBit(c+124,"auto_in_bvalid", false,-1);
    tracep->declBus(c+125,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+127,"auto_in_arready", false,-1);
    tracep->declBit(c+1211,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1208,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1212,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1209,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1213,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1210,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1214,"auto_in_rready", false,-1);
    tracep->declBit(c+128,"auto_in_rvalid", false,-1);
    tracep->declBus(c+129,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+130,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+131,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+132,"auto_in_rlast", false,-1);
    tracep->declBit(c+1086,"auto_out_awready", false,-1);
    tracep->declBit(c+1087,"auto_out_awvalid", false,-1);
    tracep->declBus(c+39,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1070,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1071,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+133,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1088,"auto_out_wready", false,-1);
    tracep->declBit(c+1089,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1073,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1074,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"auto_out_wlast", false,-1);
    tracep->declBit(c+1090,"auto_out_bready", false,-1);
    tracep->declBit(c+134,"auto_out_bvalid", false,-1);
    tracep->declBus(c+125,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+135,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+136,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+137,"auto_out_arready", false,-1);
    tracep->declBit(c+138,"auto_out_arvalid", false,-1);
    tracep->declBus(c+47,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+49,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+139,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1214,"auto_out_rready", false,-1);
    tracep->declBit(c+128,"auto_out_rvalid", false,-1);
    tracep->declBus(c+129,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+130,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+131,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+140,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+141,"auto_out_rlast", false,-1);
    tracep->declBit(c+1089,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+142,"w_idle", false,-1);
    tracep->declBit(c+1091,"in_awready", false,-1);
    tracep->declBit(c+143,"busy", false,-1);
    tracep->declBus(c+144,"r_addr", false,-1, 31,0);
    tracep->declBus(c+145,"r_len", false,-1, 7,0);
    tracep->declBus(c+146,"len", false,-1, 7,0);
    tracep->declBus(c+147,"addr", false,-1, 31,0);
    tracep->declBit(c+148,"busy_1", false,-1);
    tracep->declBus(c+149,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+150,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+151,"len_1", false,-1, 7,0);
    tracep->declBus(c+1092,"addr_1", false,-1, 31,0);
    tracep->declBit(c+152,"wbeats_latched", false,-1);
    tracep->declBit(c+1087,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1093,"wbeats_valid", false,-1);
    tracep->declBus(c+153,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1094,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1075,"w_last", false,-1);
    tracep->declBit(c+1090,"nodeOut_bready", false,-1);
    tracep->declBus(c+154,"error_0", false,-1, 1,0);
    tracep->declBus(c+155,"error_1", false,-1, 1,0);
    tracep->declBus(c+156,"error_2", false,-1, 1,0);
    tracep->declBus(c+157,"error_3", false,-1, 1,0);
    tracep->declBus(c+158,"error_4", false,-1, 1,0);
    tracep->declBus(c+159,"error_5", false,-1, 1,0);
    tracep->declBus(c+160,"error_6", false,-1, 1,0);
    tracep->declBus(c+161,"error_7", false,-1, 1,0);
    tracep->declBus(c+162,"error_8", false,-1, 1,0);
    tracep->declBus(c+163,"error_9", false,-1, 1,0);
    tracep->declBus(c+164,"error_10", false,-1, 1,0);
    tracep->declBus(c+165,"error_11", false,-1, 1,0);
    tracep->declBus(c+166,"error_12", false,-1, 1,0);
    tracep->declBus(c+167,"error_13", false,-1, 1,0);
    tracep->declBus(c+168,"error_14", false,-1, 1,0);
    tracep->declBus(c+169,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+127,"io_enq_ready", false,-1);
    tracep->declBit(c+1211,"io_enq_valid", false,-1);
    tracep->declBus(c+1208,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1212,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1209,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1213,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1210,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+170,"io_deq_ready", false,-1);
    tracep->declBit(c+138,"io_deq_valid", false,-1);
    tracep->declBus(c+47,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+171,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+172,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+49,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+50,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+173,"ram", false,-1, 48,0);
    tracep->declBit(c+175,"full", false,-1);
    tracep->declBit(c+138,"io_deq_valid_0", false,-1);
    tracep->declBit(c+176,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+122,"io_enq_ready", false,-1);
    tracep->declBit(c+1080,"io_enq_valid", false,-1);
    tracep->declBus(c+1208,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1081,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1209,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1082,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1210,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1095,"io_deq_ready", false,-1);
    tracep->declBit(c+1096,"io_deq_valid", false,-1);
    tracep->declBus(c+39,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1097,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+177,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1071,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+40,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+178,"ram", false,-1, 48,0);
    tracep->declBit(c+180,"full", false,-1);
    tracep->declBit(c+1096,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1098,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+123,"io_enq_ready", false,-1);
    tracep->declBit(c+1083,"io_enq_valid", false,-1);
    tracep->declBus(c+1084,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1085,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1207,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1099,"io_deq_ready", false,-1);
    tracep->declBit(c+1100,"io_deq_valid", false,-1);
    tracep->declBus(c+1073,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1074,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+181,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+182,"ram", false,-1, 36,0);
    tracep->declBit(c+184,"full", false,-1);
    tracep->declBit(c+1100,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1101,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1102,"auto_in_awready", false,-1);
    tracep->declBit(c+1103,"auto_in_awvalid", false,-1);
    tracep->declBus(c+39,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1104,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1105,"auto_in_wready", false,-1);
    tracep->declBit(c+1106,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1073,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1074,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1107,"auto_in_bready", false,-1);
    tracep->declBit(c+185,"auto_in_bvalid", false,-1);
    tracep->declBus(c+186,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+188,"auto_in_arready", false,-1);
    tracep->declBit(c+189,"auto_in_arvalid", false,-1);
    tracep->declBus(c+47,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+191,"auto_in_rready", false,-1);
    tracep->declBit(c+192,"auto_in_rvalid", false,-1);
    tracep->declBus(c+193,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+194,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+188,"nodeIn_arready", false,-1);
    tracep->declBit(c+1102,"nodeIn_awready", false,-1);
    tracep->declBit(c+1108,"w_sel0", false,-1);
    tracep->declBit(c+185,"w_full", false,-1);
    tracep->declBus(c+186,"w_id", false,-1, 3,0);
    tracep->declBit(c+196,"r_sel1", false,-1);
    tracep->declBit(c+197,"w_sel1", false,-1);
    tracep->declBit(c+192,"r_full", false,-1);
    tracep->declBus(c+193,"r_id", false,-1, 3,0);
    tracep->declBit(c+198,"ren", false,-1);
    tracep->declBit(c+199,"rdata_REG", false,-1);
    tracep->declBus(c+200,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+201,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+202,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+203,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+204,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+198,"R0_en", false,-1);
    tracep->declBit(c+1150,"R0_clk", false,-1);
    tracep->declBus(c+205,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1109,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1110,"W0_en", false,-1);
    tracep->declBit(c+1150,"W0_clk", false,-1);
    tracep->declBus(c+1073,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1074,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+122,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1080,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1208,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1081,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1209,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1082,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1210,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+123,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1083,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1084,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1085,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1207,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1182,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+124,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+125,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+127,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1211,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1208,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1212,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1209,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1213,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1210,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1214,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+128,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+129,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+130,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+131,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+132,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+122,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+1080,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1208,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+1081,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1209,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1082,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1210,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+123,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+1083,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+1084,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1085,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1207,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+1182,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+124,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+125,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+127,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+1211,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1208,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+1212,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1209,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1213,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1210,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1214,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+128,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+129,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+130,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+131,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+132,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1111,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1112,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1070,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1071,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1088,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1089,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1073,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1074,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1090,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+134,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+125,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+135,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+206,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+207,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+47,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+49,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1214,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+128,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+129,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+130,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+131,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+141,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1102,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1103,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1104,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1105,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1106,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1073,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1074,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1107,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+185,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+186,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+188,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+189,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+47,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+191,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+192,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+193,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+194,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1113,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1114,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+208,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+209,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+47,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+210,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+211,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+212,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+213,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+214,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+38,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1069,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1070,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1071,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+41,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1072,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1073,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1074,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+738,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+42,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+43,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+44,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+45,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+46,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+47,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+49,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+51,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+52,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+53,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+55,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+56,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+134,"in_0_bvalid", false,-1);
    tracep->declBit(c+128,"in_0_rvalid", false,-1);
    tracep->declBit(c+1115,"in_0_wready", false,-1);
    tracep->declBit(c+1116,"in_0_awready", false,-1);
    tracep->declBit(c+206,"in_0_arready", false,-1);
    tracep->declBit(c+1111,"anonIn_awready", false,-1);
    tracep->declBit(c+215,"requestARIO_0_0", false,-1);
    tracep->declBit(c+216,"requestARIO_0_1", false,-1);
    tracep->declBit(c+217,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1117,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1118,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1119,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+218,"arSel", false,-1, 15,0);
    tracep->declBus(c+219,"awSel", false,-1, 15,0);
    tracep->declBus(c+220,"rSel", false,-1, 15,0);
    tracep->declBus(c+221,"bSel", false,-1, 15,0);
    tracep->declBit(c+222,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+223,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+224,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+225,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+226,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+227,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+228,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+229,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+230,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+231,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+232,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+233,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+234,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+235,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+236,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+237,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+238,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+239,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+240,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+241,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+242,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+243,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+244,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+245,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+246,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+247,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+248,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+249,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+250,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+251,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+252,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+253,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+254,"latched", false,-1);
    tracep->declBit(c+1120,"in_0_awvalid", false,-1);
    tracep->declBit(c+1121,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1122,"in_0_wvalid", false,-1);
    tracep->declBit(c+255,"idle_3", false,-1);
    tracep->declBit(c+256,"anyValid", false,-1);
    tracep->declBus(c+257,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+258,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+259,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+260,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+261,"prefixOR_1", false,-1);
    tracep->declBit(c+262,"winner_3_1", false,-1);
    tracep->declBit(c+263,"winner_3_2", false,-1);
    tracep->declBit(c+264,"state_3_0", false,-1);
    tracep->declBit(c+265,"state_3_1", false,-1);
    tracep->declBit(c+266,"state_3_2", false,-1);
    tracep->declBit(c+267,"muxState_3_0", false,-1);
    tracep->declBit(c+268,"muxState_3_1", false,-1);
    tracep->declBit(c+269,"muxState_3_2", false,-1);
    tracep->declBit(c+270,"idle_4", false,-1);
    tracep->declBit(c+271,"anyValid_1", false,-1);
    tracep->declBus(c+272,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+273,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+274,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+275,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+276,"winner_4_0", false,-1);
    tracep->declBit(c+277,"winner_4_2", false,-1);
    tracep->declBit(c+278,"state_4_0", false,-1);
    tracep->declBit(c+279,"state_4_2", false,-1);
    tracep->declBit(c+280,"muxState_4_0", false,-1);
    tracep->declBit(c+281,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+282,"io_enq_ready", false,-1);
    tracep->declBit(c+1121,"io_enq_valid", false,-1);
    tracep->declBus(c+1123,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1124,"io_deq_ready", false,-1);
    tracep->declBit(c+1125,"io_deq_valid", false,-1);
    tracep->declBus(c+1126,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+283,"wrap", false,-1);
    tracep->declBit(c+284,"wrap_1", false,-1);
    tracep->declBit(c+285,"maybe_full", false,-1);
    tracep->declBit(c+286,"ptr_match", false,-1);
    tracep->declBit(c+287,"empty", false,-1);
    tracep->declBit(c+288,"full", false,-1);
    tracep->declBit(c+1125,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1127,"do_deq", false,-1);
    tracep->declBit(c+1128,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+284,"R0_addr", false,-1);
    tracep->declBit(c+1207,"R0_en", false,-1);
    tracep->declBit(c+1150,"R0_clk", false,-1);
    tracep->declBus(c+289,"R0_data", false,-1, 2,0);
    tracep->declBit(c+283,"W0_addr", false,-1);
    tracep->declBit(c+1128,"W0_en", false,-1);
    tracep->declBit(c+1150,"W0_clk", false,-1);
    tracep->declBus(c+1123,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+290+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1086,"auto_in_awready", false,-1);
    tracep->declBit(c+1087,"auto_in_awvalid", false,-1);
    tracep->declBus(c+39,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1070,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1071,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+133,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1088,"auto_in_wready", false,-1);
    tracep->declBit(c+1089,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1073,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1074,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"auto_in_wlast", false,-1);
    tracep->declBit(c+1090,"auto_in_bready", false,-1);
    tracep->declBit(c+134,"auto_in_bvalid", false,-1);
    tracep->declBus(c+125,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+135,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+136,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+137,"auto_in_arready", false,-1);
    tracep->declBit(c+138,"auto_in_arvalid", false,-1);
    tracep->declBus(c+47,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+49,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+139,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1214,"auto_in_rready", false,-1);
    tracep->declBit(c+128,"auto_in_rvalid", false,-1);
    tracep->declBus(c+129,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+130,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+131,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+140,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+141,"auto_in_rlast", false,-1);
    tracep->declBit(c+1111,"auto_out_awready", false,-1);
    tracep->declBit(c+1112,"auto_out_awvalid", false,-1);
    tracep->declBus(c+39,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1070,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1071,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+40,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1088,"auto_out_wready", false,-1);
    tracep->declBit(c+1089,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1073,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1074,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"auto_out_wlast", false,-1);
    tracep->declBit(c+1090,"auto_out_bready", false,-1);
    tracep->declBit(c+134,"auto_out_bvalid", false,-1);
    tracep->declBus(c+125,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+135,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+206,"auto_out_arready", false,-1);
    tracep->declBit(c+207,"auto_out_arvalid", false,-1);
    tracep->declBus(c+47,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+49,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1214,"auto_out_rready", false,-1);
    tracep->declBit(c+128,"auto_out_rvalid", false,-1);
    tracep->declBus(c+129,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+130,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+131,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+141,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+292,"io_enq_ready", false,-1);
    tracep->declBit(c+293,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+294,"io_deq_ready", false,-1);
    tracep->declBit(c+295,"io_deq_valid", false,-1);
    tracep->declBit(c+296,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+295,"full", false,-1);
    tracep->declBit(c+296,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+297,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+298,"io_enq_ready", false,-1);
    tracep->declBit(c+299,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+300,"io_deq_ready", false,-1);
    tracep->declBit(c+301,"io_deq_valid", false,-1);
    tracep->declBit(c+302,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+301,"full", false,-1);
    tracep->declBit(c+302,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+303,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+304,"io_enq_ready", false,-1);
    tracep->declBit(c+305,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+306,"io_deq_ready", false,-1);
    tracep->declBit(c+307,"io_deq_valid", false,-1);
    tracep->declBit(c+308,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+307,"full", false,-1);
    tracep->declBit(c+308,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+309,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+310,"io_enq_ready", false,-1);
    tracep->declBit(c+311,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+312,"io_deq_ready", false,-1);
    tracep->declBit(c+313,"io_deq_valid", false,-1);
    tracep->declBit(c+314,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+313,"full", false,-1);
    tracep->declBit(c+314,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+315,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+316,"io_enq_ready", false,-1);
    tracep->declBit(c+317,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+318,"io_deq_ready", false,-1);
    tracep->declBit(c+319,"io_deq_valid", false,-1);
    tracep->declBit(c+320,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+319,"full", false,-1);
    tracep->declBit(c+320,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+321,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+322,"io_enq_ready", false,-1);
    tracep->declBit(c+323,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+324,"io_deq_ready", false,-1);
    tracep->declBit(c+325,"io_deq_valid", false,-1);
    tracep->declBit(c+326,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+325,"full", false,-1);
    tracep->declBit(c+326,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+327,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+328,"io_enq_ready", false,-1);
    tracep->declBit(c+329,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+330,"io_deq_ready", false,-1);
    tracep->declBit(c+331,"io_deq_valid", false,-1);
    tracep->declBit(c+332,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+331,"full", false,-1);
    tracep->declBit(c+332,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+333,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+334,"io_enq_ready", false,-1);
    tracep->declBit(c+335,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+336,"io_deq_ready", false,-1);
    tracep->declBit(c+337,"io_deq_valid", false,-1);
    tracep->declBit(c+338,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+337,"full", false,-1);
    tracep->declBit(c+338,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+339,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+340,"io_enq_ready", false,-1);
    tracep->declBit(c+741,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+742,"io_deq_ready", false,-1);
    tracep->declBit(c+341,"io_deq_valid", false,-1);
    tracep->declBit(c+342,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+341,"full", false,-1);
    tracep->declBit(c+342,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+343,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+344,"io_enq_ready", false,-1);
    tracep->declBit(c+743,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+744,"io_deq_ready", false,-1);
    tracep->declBit(c+345,"io_deq_valid", false,-1);
    tracep->declBit(c+346,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+345,"full", false,-1);
    tracep->declBit(c+346,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+347,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+348,"io_enq_ready", false,-1);
    tracep->declBit(c+745,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+746,"io_deq_ready", false,-1);
    tracep->declBit(c+349,"io_deq_valid", false,-1);
    tracep->declBit(c+350,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+349,"full", false,-1);
    tracep->declBit(c+350,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+351,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+352,"io_enq_ready", false,-1);
    tracep->declBit(c+747,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+748,"io_deq_ready", false,-1);
    tracep->declBit(c+353,"io_deq_valid", false,-1);
    tracep->declBit(c+354,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+353,"full", false,-1);
    tracep->declBit(c+354,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+355,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+356,"io_enq_ready", false,-1);
    tracep->declBit(c+357,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+358,"io_deq_ready", false,-1);
    tracep->declBit(c+359,"io_deq_valid", false,-1);
    tracep->declBit(c+360,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+359,"full", false,-1);
    tracep->declBit(c+360,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+361,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+362,"io_enq_ready", false,-1);
    tracep->declBit(c+749,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+750,"io_deq_ready", false,-1);
    tracep->declBit(c+363,"io_deq_valid", false,-1);
    tracep->declBit(c+364,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+363,"full", false,-1);
    tracep->declBit(c+364,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+365,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+366,"io_enq_ready", false,-1);
    tracep->declBit(c+751,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+752,"io_deq_ready", false,-1);
    tracep->declBit(c+367,"io_deq_valid", false,-1);
    tracep->declBit(c+368,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+367,"full", false,-1);
    tracep->declBit(c+368,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+369,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+370,"io_enq_ready", false,-1);
    tracep->declBit(c+753,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+754,"io_deq_ready", false,-1);
    tracep->declBit(c+371,"io_deq_valid", false,-1);
    tracep->declBit(c+372,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+371,"full", false,-1);
    tracep->declBit(c+372,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+373,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+374,"io_enq_ready", false,-1);
    tracep->declBit(c+755,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+756,"io_deq_ready", false,-1);
    tracep->declBit(c+375,"io_deq_valid", false,-1);
    tracep->declBit(c+376,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+375,"full", false,-1);
    tracep->declBit(c+376,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+377,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+378,"io_enq_ready", false,-1);
    tracep->declBit(c+757,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+758,"io_deq_ready", false,-1);
    tracep->declBit(c+379,"io_deq_valid", false,-1);
    tracep->declBit(c+380,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+379,"full", false,-1);
    tracep->declBit(c+380,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+381,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+382,"io_enq_ready", false,-1);
    tracep->declBit(c+759,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+760,"io_deq_ready", false,-1);
    tracep->declBit(c+383,"io_deq_valid", false,-1);
    tracep->declBit(c+384,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+383,"full", false,-1);
    tracep->declBit(c+384,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+385,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+386,"io_enq_ready", false,-1);
    tracep->declBit(c+761,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+762,"io_deq_ready", false,-1);
    tracep->declBit(c+387,"io_deq_valid", false,-1);
    tracep->declBit(c+388,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+387,"full", false,-1);
    tracep->declBit(c+388,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+389,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+390,"io_enq_ready", false,-1);
    tracep->declBit(c+763,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+764,"io_deq_ready", false,-1);
    tracep->declBit(c+391,"io_deq_valid", false,-1);
    tracep->declBit(c+392,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+391,"full", false,-1);
    tracep->declBit(c+392,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+393,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+394,"io_enq_ready", false,-1);
    tracep->declBit(c+765,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+766,"io_deq_ready", false,-1);
    tracep->declBit(c+395,"io_deq_valid", false,-1);
    tracep->declBit(c+396,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+395,"full", false,-1);
    tracep->declBit(c+396,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+397,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+398,"io_enq_ready", false,-1);
    tracep->declBit(c+767,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+768,"io_deq_ready", false,-1);
    tracep->declBit(c+399,"io_deq_valid", false,-1);
    tracep->declBit(c+400,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+399,"full", false,-1);
    tracep->declBit(c+400,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+401,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+402,"io_enq_ready", false,-1);
    tracep->declBit(c+403,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+404,"io_deq_ready", false,-1);
    tracep->declBit(c+405,"io_deq_valid", false,-1);
    tracep->declBit(c+406,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+405,"full", false,-1);
    tracep->declBit(c+406,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+407,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+408,"io_enq_ready", false,-1);
    tracep->declBit(c+769,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+770,"io_deq_ready", false,-1);
    tracep->declBit(c+409,"io_deq_valid", false,-1);
    tracep->declBit(c+410,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+409,"full", false,-1);
    tracep->declBit(c+410,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+411,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+412,"io_enq_ready", false,-1);
    tracep->declBit(c+771,"io_enq_valid", false,-1);
    tracep->declBit(c+133,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+772,"io_deq_ready", false,-1);
    tracep->declBit(c+413,"io_deq_valid", false,-1);
    tracep->declBit(c+414,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+413,"full", false,-1);
    tracep->declBit(c+414,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+415,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+416,"io_enq_ready", false,-1);
    tracep->declBit(c+417,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+418,"io_deq_ready", false,-1);
    tracep->declBit(c+419,"io_deq_valid", false,-1);
    tracep->declBit(c+420,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+419,"full", false,-1);
    tracep->declBit(c+420,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+421,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+422,"io_enq_ready", false,-1);
    tracep->declBit(c+423,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+424,"io_deq_ready", false,-1);
    tracep->declBit(c+425,"io_deq_valid", false,-1);
    tracep->declBit(c+426,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+425,"full", false,-1);
    tracep->declBit(c+426,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+427,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+428,"io_enq_ready", false,-1);
    tracep->declBit(c+429,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+430,"io_deq_ready", false,-1);
    tracep->declBit(c+431,"io_deq_valid", false,-1);
    tracep->declBit(c+432,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+431,"full", false,-1);
    tracep->declBit(c+432,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+433,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+434,"io_enq_ready", false,-1);
    tracep->declBit(c+435,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+436,"io_deq_ready", false,-1);
    tracep->declBit(c+437,"io_deq_valid", false,-1);
    tracep->declBit(c+438,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+437,"full", false,-1);
    tracep->declBit(c+438,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+439,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+440,"io_enq_ready", false,-1);
    tracep->declBit(c+441,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+442,"io_deq_ready", false,-1);
    tracep->declBit(c+443,"io_deq_valid", false,-1);
    tracep->declBit(c+444,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+443,"full", false,-1);
    tracep->declBit(c+444,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+445,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+446,"io_enq_ready", false,-1);
    tracep->declBit(c+447,"io_enq_valid", false,-1);
    tracep->declBit(c+139,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+448,"io_deq_ready", false,-1);
    tracep->declBit(c+449,"io_deq_valid", false,-1);
    tracep->declBit(c+450,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+449,"full", false,-1);
    tracep->declBit(c+450,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+451,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1183,"reset", false,-1);
    tracep->declBit(c+122,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1080,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1208,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1081,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1209,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1082,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1210,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+123,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1083,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1084,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1085,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1207,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1182,"auto_master_out_bready", false,-1);
    tracep->declBit(c+124,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+125,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+127,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1211,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1208,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1212,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1209,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1213,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1210,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1214,"auto_master_out_rready", false,-1);
    tracep->declBit(c+128,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+129,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+130,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+131,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+132,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1183,"reset", false,-1);
    tracep->declBit(c+1197,"io_interrupt", false,-1);
    tracep->declBit(c+122,"io_master_awready", false,-1);
    tracep->declBit(c+1080,"io_master_awvalid", false,-1);
    tracep->declBus(c+1208,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1081,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1209,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1082,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1210,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+123,"io_master_wready", false,-1);
    tracep->declBit(c+1083,"io_master_wvalid", false,-1);
    tracep->declBus(c+1084,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1085,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1207,"io_master_wlast", false,-1);
    tracep->declBit(c+1182,"io_master_bready", false,-1);
    tracep->declBit(c+124,"io_master_bvalid", false,-1);
    tracep->declBus(c+125,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+126,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+127,"io_master_arready", false,-1);
    tracep->declBit(c+1211,"io_master_arvalid", false,-1);
    tracep->declBus(c+1208,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1212,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1209,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1213,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1210,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1214,"io_master_rready", false,-1);
    tracep->declBit(c+128,"io_master_rvalid", false,-1);
    tracep->declBus(c+129,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+130,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+131,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+132,"io_master_rlast", false,-1);
    tracep->declBit(c+1197,"io_slave_awready", false,-1);
    tracep->declBit(c+1197,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1215,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1208,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1209,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1216,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1210,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1197,"io_slave_wready", false,-1);
    tracep->declBit(c+1197,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1215,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1208,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1197,"io_slave_wlast", false,-1);
    tracep->declBit(c+1197,"io_slave_bready", false,-1);
    tracep->declBit(c+1197,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1210,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1208,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1197,"io_slave_arready", false,-1);
    tracep->declBit(c+1197,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1215,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1208,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1209,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1216,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1210,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1197,"io_slave_rready", false,-1);
    tracep->declBit(c+1197,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1210,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1215,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1197,"io_slave_rlast", false,-1);
    tracep->declBus(c+1208,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+452,"cur_pc", false,-1, 31,0);
    tracep->declBit(c+453,"commit", false,-1);
    tracep->declBus(c+454,"commit_pc", false,-1, 31,0);
    tracep->declBus(c+455,"commit_pre_pc", false,-1, 31,0);
    tracep->declBit(c+1184,"rst_o_reset", false,-1);
    tracep->declBus(c+456,"select_pc_o_pc", false,-1, 31,0);
    tracep->declBus(c+1217,"instr", false,-1, 31,0);
    tracep->declBus(c+452,"regF_o_pc", false,-1, 31,0);
    tracep->declBit(c+457,"regF_o_io_master_awready", false,-1);
    tracep->declBit(c+458,"regF_o_io_master_wready", false,-1);
    tracep->declBit(c+459,"regF_o_io_master_bvalid", false,-1);
    tracep->declBus(c+460,"fetch_o_pre_pc", false,-1, 31,0);
    tracep->declBus(c+461,"fetch_o_instr", false,-1, 31,0);
    tracep->declBit(c+1207,"fetch_o_commit", false,-1);
    tracep->declBus(c+462,"regD_o_pc", false,-1, 31,0);
    tracep->declBus(c+463,"regD_o_pre_pc", false,-1, 31,0);
    tracep->declBit(c+464,"regD_o_commit", false,-1);
    tracep->declBus(c+465,"regD_o_instr", false,-1, 31,0);
    tracep->declBit(c+466,"regD_o_io_master_awready", false,-1);
    tracep->declBit(c+467,"regD_o_io_master_wready", false,-1);
    tracep->declBit(c+468,"regD_o_io_master_bvalid", false,-1);
    tracep->declBus(c+469,"decode_o_valA", false,-1, 31,0);
    tracep->declBus(c+470,"decode_o_valB", false,-1, 31,0);
    tracep->declBus(c+471,"decode_o_imm", false,-1, 31,0);
    tracep->declBus(c+472,"decode_o_alu_valA_sel", false,-1, 1,0);
    tracep->declBus(c+473,"decode_o_alu_valB_sel", false,-1, 1,0);
    tracep->declBus(c+474,"decode_o_alu_func_sel", false,-1, 3,0);
    tracep->declBus(c+475,"decode_o_mem_rw", false,-1, 3,0);
    tracep->declBus(c+476,"decode_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+477,"decode_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+478,"decode_o_rs1", false,-1, 4,0);
    tracep->declBus(c+479,"decode_o_rs2", false,-1, 11,0);
    tracep->declBus(c+480,"decode_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+481,"decode_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+1218,"regE_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBit(c+482,"decode_o_is_ecall", false,-1);
    tracep->declBit(c+483,"decode_o_wb_reg_wen", false,-1);
    tracep->declBit(c+484,"decode_o_need_jump", false,-1);
    tracep->declBit(c+485,"decode_o_is_mret", false,-1);
    tracep->declBit(c+486,"decode_o_is_jalr", false,-1);
    tracep->declBus(c+487,"regE_o_valA", false,-1, 31,0);
    tracep->declBus(c+488,"regE_o_valB", false,-1, 31,0);
    tracep->declBus(c+489,"regE_o_imm", false,-1, 31,0);
    tracep->declBus(c+490,"regE_o_alu_valA_sel", false,-1, 1,0);
    tracep->declBus(c+491,"regE_o_alu_valB_sel", false,-1, 1,0);
    tracep->declBus(c+492,"regE_o_alu_func_sel", false,-1, 3,0);
    tracep->declBus(c+493,"regE_o_mem_rw", false,-1, 3,0);
    tracep->declBus(c+494,"regE_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+495,"regE_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+496,"regE_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+497,"regE_o_pc", false,-1, 31,0);
    tracep->declBus(c+498,"regE_o_instr", false,-1, 31,0);
    tracep->declBus(c+499,"regE_o_pre_pc", false,-1, 31,0);
    tracep->declBus(c+500,"regE_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBit(c+501,"regE_o_is_jalr", false,-1);
    tracep->declBit(c+502,"regE_o_need_jump", false,-1);
    tracep->declBit(c+503,"regE_o_wb_reg_wen", false,-1);
    tracep->declBit(c+504,"regE_o_commit", false,-1);
    tracep->declBit(c+505,"regE_o_is_ecall", false,-1);
    tracep->declBit(c+506,"regE_o_is_mret", false,-1);
    tracep->declBit(c+507,"regE_o_io_master_awready", false,-1);
    tracep->declBit(c+508,"regE_o_io_master_wready", false,-1);
    tracep->declBit(c+509,"regE_o_io_master_bvalid", false,-1);
    tracep->declBus(c+510,"execute_o_pre_pc", false,-1, 31,0);
    tracep->declBus(c+511,"execute_o_valE", false,-1, 31,0);
    tracep->declBit(c+502,"execute_o_need_jump", false,-1);
    tracep->declBit(c+1219,"execute_o_is_jalr", false,-1);
    tracep->declBus(c+512,"regM_o_valE", false,-1, 31,0);
    tracep->declBus(c+513,"regM_o_mem_rw", false,-1, 3,0);
    tracep->declBus(c+514,"regM_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+515,"regM_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+516,"regM_o_instr", false,-1, 31,0);
    tracep->declBus(c+517,"regM_o_pc", false,-1, 31,0);
    tracep->declBus(c+518,"regM_o_pre_pc", false,-1, 31,0);
    tracep->declBus(c+519,"regM_o_valB", false,-1, 31,0);
    tracep->declBus(c+520,"regM_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+521,"regM_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBit(c+522,"regM_o_commit", false,-1);
    tracep->declBit(c+523,"regM_o_wb_reg_wen", false,-1);
    tracep->declBit(c+524,"regM_o_io_master_awready", false,-1);
    tracep->declBit(c+525,"regM_o_io_master_wready", false,-1);
    tracep->declBit(c+526,"regM_o_io_master_bvalid", false,-1);
    tracep->declBus(c+527,"memory_o_valM", false,-1, 31,0);
    tracep->declBit(c+528,"memory_o_io_master_wvalid", false,-1);
    tracep->declBus(c+529,"memory_o_io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+530,"memory_o_io_master_wstrb", false,-1, 3,0);
    tracep->declBus(c+531,"memory_o_io_master_awsize", false,-1, 2,0);
    tracep->declBit(c+532,"memory_o_io_master_awvalid", false,-1);
    tracep->declBus(c+533,"memory_o_io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+534,"regW_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+535,"regW_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+536,"regW_o_valE", false,-1, 31,0);
    tracep->declBus(c+454,"regW_o_pc", false,-1, 31,0);
    tracep->declBus(c+537,"regW_o_instr", false,-1, 31,0);
    tracep->declBus(c+455,"regW_o_pre_pc", false,-1, 31,0);
    tracep->declBus(c+538,"regW_o_valM", false,-1, 31,0);
    tracep->declBus(c+539,"regW_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+540,"regW_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBit(c+453,"regW_o_commit", false,-1);
    tracep->declBit(c+541,"regW_o_wb_reg_wen", false,-1);
    tracep->declBus(c+534,"write_back_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+540,"write_back_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+542,"write_back_o_wb_valD", false,-1, 31,0);
    tracep->declBus(c+539,"write_back_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBit(c+541,"write_back_o_wb_reg_wen", false,-1);
    tracep->declBit(c+543,"ctrl_o_regF_stall", false,-1);
    tracep->declBit(c+543,"ctrl_o_regD_stall", false,-1);
    tracep->declBit(c+1197,"ctrl_o_regE_stall", false,-1);
    tracep->declBit(c+1197,"ctrl_o_regM_stall", false,-1);
    tracep->declBit(c+1197,"ctrl_o_regW_stall", false,-1);
    tracep->declBit(c+1197,"ctrl_o_regF_bubble", false,-1);
    tracep->declBit(c+502,"ctrl_o_regD_bubble", false,-1);
    tracep->declBit(c+544,"ctrl_o_regE_bubble", false,-1);
    tracep->declBit(c+1197,"ctrl_o_regM_bubble", false,-1);
    tracep->declBit(c+1197,"ctrl_o_regW_bubble", false,-1);
    tracep->pushNamePrefix("u_axi4_mem ");
    tracep->declBit(c+1184,"rst", false,-1);
    tracep->declBit(c+525,"regM_i_io_master_wready", false,-1);
    tracep->declBit(c+528,"memory_i_io_master_wvalid", false,-1);
    tracep->declBus(c+529,"memory_i_io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+530,"memory_i_io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+524,"regM_i_io_master_awready", false,-1);
    tracep->declBit(c+532,"memory_i_io_master_awvalid", false,-1);
    tracep->declBus(c+531,"memory_i_io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+533,"memory_i_io_master_awaddr", false,-1, 31,0);
    tracep->declBit(c+1083,"axi4_mem_o_io_master_wvalid", false,-1);
    tracep->declBus(c+1084,"axi4_mem_o_io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1085,"axi4_mem_o_io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1080,"axi4_mem_o_io_master_awvaild", false,-1);
    tracep->declBus(c+1082,"axi4_mem_o_io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1081,"axi4_mem_o_io_master_awaddr", false,-1, 31,0);
    tracep->declBit(c+1182,"axi4_mem_o_io_master_bready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ctrl ");
    tracep->declBit(c+502,"execute_i_need_jump", false,-1);
    tracep->declBit(c+124,"io_master_bvalid", false,-1);
    tracep->declBus(c+478,"decode_i_rs1", false,-1, 4,0);
    tracep->declBus(c+545,"decode_i_rs2", false,-1, 4,0);
    tracep->declBus(c+494,"regE_i_rd", false,-1, 4,0);
    tracep->declBus(c+493,"regE_i_mem_rw", false,-1, 3,0);
    tracep->declBit(c+543,"ctrl_o_regF_stall", false,-1);
    tracep->declBit(c+543,"ctrl_o_regD_stall", false,-1);
    tracep->declBit(c+1197,"ctrl_o_regE_stall", false,-1);
    tracep->declBit(c+1197,"ctrl_o_regM_stall", false,-1);
    tracep->declBit(c+1197,"ctrl_o_regW_stall", false,-1);
    tracep->declBit(c+1197,"ctrl_o_regF_bubble", false,-1);
    tracep->declBit(c+502,"ctrl_o_regD_bubble", false,-1);
    tracep->declBit(c+544,"ctrl_o_regE_bubble", false,-1);
    tracep->declBit(c+1197,"ctrl_o_regM_bubble", false,-1);
    tracep->declBit(c+1197,"ctrl_o_regW_bubble", false,-1);
    tracep->declBit(c+546,"rv32_lb", false,-1);
    tracep->declBit(c+547,"rv32_lh", false,-1);
    tracep->declBit(c+548,"rv32_lw", false,-1);
    tracep->declBit(c+549,"rv32_lbu", false,-1);
    tracep->declBit(c+550,"rv32_lhu", false,-1);
    tracep->declBit(c+551,"rv32_load", false,-1);
    tracep->declBit(c+552,"rv32_sb", false,-1);
    tracep->declBit(c+553,"rv32_sh", false,-1);
    tracep->declBit(c+554,"rv32_sw", false,-1);
    tracep->declBit(c+555,"rv32_store", false,-1);
    tracep->declBit(c+543,"load_use", false,-1);
    tracep->declBit(c+502,"branch_bubble", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_decode ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1184,"rst", false,-1);
    tracep->declBus(c+465,"regD_i_instr", false,-1, 31,0);
    tracep->declBus(c+536,"regW_i_valE", false,-1, 31,0);
    tracep->declBus(c+538,"regW_i_valM", false,-1, 31,0);
    tracep->declBus(c+535,"regW_i_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+534,"regW_i_wb_rd", false,-1, 4,0);
    tracep->declBit(c+541,"regW_i_wb_reg_wen", false,-1);
    tracep->declBus(c+454,"regW_i_pc", false,-1, 31,0);
    tracep->declBus(c+512,"regM_i_valE", false,-1, 31,0);
    tracep->declBus(c+527,"memory_i_valM", false,-1, 31,0);
    tracep->declBus(c+515,"regM_i_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+514,"regM_i_wb_rd", false,-1, 4,0);
    tracep->declBit(c+523,"regM_i_wb_reg_wen", false,-1);
    tracep->declBus(c+1218,"regE_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBit(c+503,"regE_i_wb_reg_wen", false,-1);
    tracep->declBus(c+494,"regE_i_wb_rd", false,-1, 4,0);
    tracep->declBus(c+511,"execute_i_valE", false,-1, 31,0);
    tracep->declBit(c+541,"write_back_i_wb_reg_wen", false,-1);
    tracep->declBus(c+534,"write_back_i_wb_rd", false,-1, 4,0);
    tracep->declBus(c+542,"write_back_i_wb_valD", false,-1, 31,0);
    tracep->declBus(c+539,"write_back_i_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+540,"write_back_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+469,"decode_o_valA", false,-1, 31,0);
    tracep->declBus(c+470,"decode_o_valB", false,-1, 31,0);
    tracep->declBus(c+471,"decode_o_imm", false,-1, 31,0);
    tracep->declBus(c+472,"decode_o_alu_valA_sel", false,-1, 1,0);
    tracep->declBus(c+473,"decode_o_alu_valB_sel", false,-1, 1,0);
    tracep->declBus(c+474,"decode_o_alu_func_sel", false,-1, 3,0);
    tracep->declBus(c+475,"decode_o_mem_rw", false,-1, 3,0);
    tracep->declBus(c+481,"decode_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBit(c+483,"decode_o_wb_reg_wen", false,-1);
    tracep->declBus(c+476,"decode_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+477,"decode_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+478,"decode_o_rs1", false,-1, 4,0);
    tracep->declBus(c+479,"decode_o_rs2", false,-1, 11,0);
    tracep->declBus(c+480,"decode_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBit(c+484,"decode_o_need_jump", false,-1);
    tracep->declBit(c+486,"decode_o_is_jalr", false,-1);
    tracep->declBit(c+485,"decode_o_is_mret", false,-1);
    tracep->declBit(c+482,"decode_o_is_ecall", false,-1);
    tracep->declBus(c+465,"rv32I_instr", false,-1, 31,0);
    tracep->declBus(c+556,"rv32I_opcode", false,-1, 6,0);
    tracep->declBus(c+557,"rv32I_rd", false,-1, 4,0);
    tracep->declBus(c+481,"rv32I_csr_rd", false,-1, 11,0);
    tracep->declBus(c+558,"rv32I_func3", false,-1, 2,0);
    tracep->declBus(c+559,"rv32I_rs1", false,-1, 4,0);
    tracep->declBus(c+560,"rv32I_rs2", false,-1, 4,0);
    tracep->declBus(c+561,"rv32I_func7", false,-1, 6,0);
    tracep->declBit(c+562,"opcode_I_Logic_Operator", false,-1);
    tracep->declBit(c+563,"opcode_I_LOAD", false,-1);
    tracep->declBit(c+564,"opcode_I_CSR", false,-1);
    tracep->declBit(c+486,"opcode_I_JALR", false,-1);
    tracep->declBit(c+565,"opcode_R_TYPE", false,-1);
    tracep->declBit(c+566,"opcode_B_TYPE", false,-1);
    tracep->declBit(c+567,"opcode_S_TYPE", false,-1);
    tracep->declBit(c+568,"opcode_J_TYPE", false,-1);
    tracep->declBit(c+569,"opcode_U_lui", false,-1);
    tracep->declBit(c+570,"opcode_U_auipc", false,-1);
    tracep->declBit(c+571,"opcode_U_TYPE", false,-1);
    tracep->declBit(c+562,"rv32I_I_Logic_Operator", false,-1);
    tracep->declBit(c+563,"rv32I_I_LOAD", false,-1);
    tracep->declBit(c+486,"rv32I_I_JALR", false,-1);
    tracep->declBit(c+564,"rv32I_I_CSR", false,-1);
    tracep->declBit(c+572,"rv32I_I_TYPE", false,-1);
    tracep->declBit(c+567,"rv32I_S_TYPE", false,-1);
    tracep->declBit(c+565,"rv32I_R_TYPE", false,-1);
    tracep->declBit(c+566,"rv32I_B_TYPE", false,-1);
    tracep->declBit(c+568,"rv32I_J_TYPE", false,-1);
    tracep->declBit(c+571,"rv32I_U_TYPE", false,-1);
    tracep->declBit(c+573,"func3_000", false,-1);
    tracep->declBit(c+574,"func3_001", false,-1);
    tracep->declBit(c+575,"func3_010", false,-1);
    tracep->declBit(c+576,"func3_011", false,-1);
    tracep->declBit(c+577,"func3_100", false,-1);
    tracep->declBit(c+578,"func3_101", false,-1);
    tracep->declBit(c+579,"func3_110", false,-1);
    tracep->declBit(c+580,"func3_111", false,-1);
    tracep->declBit(c+573,"func3_R_add_sub", false,-1);
    tracep->declBit(c+574,"func3_R_sll", false,-1);
    tracep->declBit(c+575,"func3_R_slt", false,-1);
    tracep->declBit(c+576,"func3_R_sltu", false,-1);
    tracep->declBit(c+577,"func3_R_xor", false,-1);
    tracep->declBit(c+578,"func3_R_srl_sra", false,-1);
    tracep->declBit(c+579,"func3_R_or", false,-1);
    tracep->declBit(c+580,"func3_R_and", false,-1);
    tracep->declBit(c+573,"func3_B_beq", false,-1);
    tracep->declBit(c+574,"func3_B_bne", false,-1);
    tracep->declBit(c+577,"func3_B_blt", false,-1);
    tracep->declBit(c+578,"func3_B_bge", false,-1);
    tracep->declBit(c+579,"func3_B_bltu", false,-1);
    tracep->declBit(c+580,"func3_B_bgeu", false,-1);
    tracep->declBit(c+573,"func3_I_addi", false,-1);
    tracep->declBit(c+574,"func3_I_slli", false,-1);
    tracep->declBit(c+575,"func3_I_slti", false,-1);
    tracep->declBit(c+576,"func3_I_sltiu", false,-1);
    tracep->declBit(c+577,"func3_I_xori", false,-1);
    tracep->declBit(c+578,"func3_I_srli_srai", false,-1);
    tracep->declBit(c+579,"func3_I_ori", false,-1);
    tracep->declBit(c+580,"func3_I_andi", false,-1);
    tracep->declBit(c+573,"func3_I_lb", false,-1);
    tracep->declBit(c+574,"func3_I_lh", false,-1);
    tracep->declBit(c+575,"func3_I_lw", false,-1);
    tracep->declBit(c+577,"func3_I_lbu", false,-1);
    tracep->declBit(c+578,"func3_I_lhu", false,-1);
    tracep->declBit(c+574,"func3_I_csrrw", false,-1);
    tracep->declBit(c+575,"func3_I_csrrs", false,-1);
    tracep->declBit(c+573,"func3_S_sb", false,-1);
    tracep->declBit(c+574,"func3_S_sh", false,-1);
    tracep->declBit(c+575,"func3_S_sw", false,-1);
    tracep->declBit(c+581,"func7_0000000", false,-1);
    tracep->declBit(c+582,"func7_0100000", false,-1);
    tracep->declBit(c+582,"func7_sra", false,-1);
    tracep->declBit(c+582,"func7_srai", false,-1);
    tracep->declBit(c+581,"func7_srl", false,-1);
    tracep->declBit(c+581,"func7_srli", false,-1);
    tracep->declBit(c+581,"func7_add", false,-1);
    tracep->declBit(c+582,"func7_sub", false,-1);
    tracep->declBit(c+581,"func7_slli", false,-1);
    tracep->declBit(c+581,"func7_sll", false,-1);
    tracep->declBit(c+569,"rv32I_U_lui", false,-1);
    tracep->declBit(c+570,"rv32I_U_auipc", false,-1);
    tracep->declBit(c+583,"rv32I_I_addi", false,-1);
    tracep->declBit(c+584,"rv32I_I_slli", false,-1);
    tracep->declBit(c+585,"rv32I_I_slti", false,-1);
    tracep->declBit(c+586,"rv32I_I_sltiu", false,-1);
    tracep->declBit(c+587,"rv32I_I_xori", false,-1);
    tracep->declBit(c+588,"rv32I_I_srli", false,-1);
    tracep->declBit(c+589,"rv32I_I_srai", false,-1);
    tracep->declBit(c+590,"rv32I_I_ori", false,-1);
    tracep->declBit(c+591,"rv32I_I_andi", false,-1);
    tracep->declBit(c+592,"rv32I_I_lb", false,-1);
    tracep->declBit(c+593,"rv32I_I_lh", false,-1);
    tracep->declBit(c+594,"rv32I_I_lw", false,-1);
    tracep->declBit(c+595,"rv32I_I_lbu", false,-1);
    tracep->declBit(c+596,"rv32I_I_lhu", false,-1);
    tracep->declBit(c+486,"rv32I_I_jalr", false,-1);
    tracep->declBit(c+482,"rv32I_ecall", false,-1);
    tracep->declBit(c+485,"rv32I_mret", false,-1);
    tracep->declBit(c+597,"rv32I_I_csrrw", false,-1);
    tracep->declBit(c+598,"rv32I_I_csrrs", false,-1);
    tracep->declBit(c+599,"rv32I_R_add", false,-1);
    tracep->declBit(c+600,"rv32I_R_sub", false,-1);
    tracep->declBit(c+601,"rv32I_R_sll", false,-1);
    tracep->declBit(c+602,"rv32I_R_slt", false,-1);
    tracep->declBit(c+603,"rv32I_R_sltu", false,-1);
    tracep->declBit(c+604,"rv32I_R_xor", false,-1);
    tracep->declBit(c+605,"rv32I_R_srl", false,-1);
    tracep->declBit(c+606,"rv32I_R_sra", false,-1);
    tracep->declBit(c+607,"rv32I_R_or", false,-1);
    tracep->declBit(c+608,"rv32I_R_and", false,-1);
    tracep->declBit(c+609,"rv32I_B_beq", false,-1);
    tracep->declBit(c+610,"rv32I_B_bne", false,-1);
    tracep->declBit(c+611,"rv32I_B_blt", false,-1);
    tracep->declBit(c+612,"rv32I_B_bge", false,-1);
    tracep->declBit(c+613,"rv32I_B_bltu", false,-1);
    tracep->declBit(c+614,"rv32I_B_bgeu", false,-1);
    tracep->declBit(c+615,"rv32I_S_sb", false,-1);
    tracep->declBit(c+616,"rv32I_S_sh", false,-1);
    tracep->declBit(c+617,"rv32I_S_sw", false,-1);
    tracep->declBit(c+568,"rv32I_J_jal", false,-1);
    tracep->declBus(c+618,"imm_U_TYPE", false,-1, 31,0);
    tracep->declBus(c+619,"imm_I_TYPE", false,-1, 31,0);
    tracep->declBus(c+620,"imm_I_SHAMT", false,-1, 31,0);
    tracep->declBus(c+621,"imm_S_TYPE", false,-1, 31,0);
    tracep->declBus(c+1215,"imm_R_TYPE", false,-1, 31,0);
    tracep->declBus(c+622,"imm_B_TYPE", false,-1, 31,0);
    tracep->declBus(c+623,"imm_J_TYPE", false,-1, 31,0);
    tracep->declBit(c+572,"opcode_I_TYPE", false,-1);
    tracep->declBus(c+624,"regfile_o_valA", false,-1, 31,0);
    tracep->declBus(c+625,"regfile_o_valB", false,-1, 31,0);
    tracep->declBus(c+626,"regfile_i_rs1", false,-1, 4,0);
    tracep->declBus(c+627,"regfile_i_rs2", false,-1, 11,0);
    tracep->pushNamePrefix("u_regfile ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1184,"rst", false,-1);
    tracep->declBus(c+539,"write_back_i_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+540,"write_back_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBit(c+541,"write_back_i_wb_reg_wen", false,-1);
    tracep->declBus(c+534,"write_back_i_wb_rd", false,-1, 4,0);
    tracep->declBus(c+454,"regW_i_pc", false,-1, 31,0);
    tracep->declBus(c+542,"write_back_i_wb_valD", false,-1, 31,0);
    tracep->declBus(c+626,"decode_i_rs1", false,-1, 4,0);
    tracep->declBus(c+627,"decode_i_rs2", false,-1, 11,0);
    tracep->declBus(c+624,"regfile_o_valA", false,-1, 31,0);
    tracep->declBus(c+625,"regfile_o_valB", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+628+i*1,"regfile", true,(i+0), 31,0);
    }
    tracep->declBus(c+660,"mstatus", false,-1, 31,0);
    tracep->declBus(c+661,"mtvec", false,-1, 31,0);
    tracep->declBus(c+662,"mcause", false,-1, 31,0);
    tracep->declBus(c+663,"mepc", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_execute ");
    tracep->declBus(c+487,"regE_i_valA", false,-1, 31,0);
    tracep->declBus(c+488,"regE_i_valB", false,-1, 31,0);
    tracep->declBus(c+489,"regE_i_imm", false,-1, 31,0);
    tracep->declBus(c+497,"regE_i_pc", false,-1, 31,0);
    tracep->declBus(c+490,"regE_i_alu_valA_sel", false,-1, 1,0);
    tracep->declBus(c+491,"regE_i_alu_valB_sel", false,-1, 1,0);
    tracep->declBus(c+492,"regE_i_alu_func_sel", false,-1, 3,0);
    tracep->declBit(c+502,"regE_i_need_jump", false,-1);
    tracep->declBit(c+501,"regE_i_is_jalr", false,-1);
    tracep->declBit(c+506,"regE_i_is_mret", false,-1);
    tracep->declBit(c+505,"regE_i_is_ecall", false,-1);
    tracep->declBus(c+499,"regE_i_pre_pc", false,-1, 31,0);
    tracep->declBus(c+510,"execute_o_pre_pc", false,-1, 31,0);
    tracep->declBus(c+511,"execute_o_valE", false,-1, 31,0);
    tracep->declBit(c+502,"execute_o_need_jump", false,-1);
    tracep->declBus(c+664,"alu_valA", false,-1, 31,0);
    tracep->declBus(c+665,"alu_valB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+452,"regF_i_pc", false,-1, 31,0);
    tracep->declBus(c+460,"fetch_o_pre_pc", false,-1, 31,0);
    tracep->declBus(c+461,"fetch_o_instr", false,-1, 31,0);
    tracep->declBit(c+1207,"fetch_o_commit", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_memory ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1184,"rst", false,-1);
    tracep->declBus(c+512,"regM_i_valE", false,-1, 31,0);
    tracep->declBus(c+519,"regM_i_valB", false,-1, 31,0);
    tracep->declBus(c+513,"regM_i_mem_rw", false,-1, 3,0);
    tracep->declBus(c+516,"instr", false,-1, 31,0);
    tracep->declBit(c+528,"memory_o_io_master_wvalid", false,-1);
    tracep->declBus(c+529,"memory_o_io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+530,"memory_o_io_master_wstrb", false,-1, 3,0);
    tracep->declBus(c+531,"memory_o_io_master_awsize", false,-1, 2,0);
    tracep->declBit(c+532,"memory_o_io_master_awvalid", false,-1);
    tracep->declBus(c+533,"memory_o_io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+527,"memory_o_valM", false,-1, 31,0);
    tracep->declBit(c+666,"mem_no_rw", false,-1);
    tracep->declBit(c+667,"rv32_lb", false,-1);
    tracep->declBit(c+668,"rv32_lh", false,-1);
    tracep->declBit(c+669,"rv32_lw", false,-1);
    tracep->declBit(c+670,"rv32_lbu", false,-1);
    tracep->declBit(c+671,"rv32_lhu", false,-1);
    tracep->declBit(c+672,"rv32_load", false,-1);
    tracep->declBus(c+673,"read_mem_data", false,-1, 31,0);
    tracep->declBit(c+674,"rv32_sb", false,-1);
    tracep->declBit(c+675,"rv32_sh", false,-1);
    tracep->declBit(c+676,"rv32_sw", false,-1);
    tracep->declBus(c+519,"data", false,-1, 31,0);
    tracep->declBus(c+512,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regD ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1184,"rst", false,-1);
    tracep->declBit(c+502,"ctrl_i_regD_bubble", false,-1);
    tracep->declBit(c+543,"ctrl_i_regD_stall", false,-1);
    tracep->declBus(c+461,"fetch_i_instr", false,-1, 31,0);
    tracep->declBus(c+452,"regF_i_pc", false,-1, 31,0);
    tracep->declBit(c+457,"regF_i_io_master_awready", false,-1);
    tracep->declBit(c+458,"regF_i_io_master_wready", false,-1);
    tracep->declBit(c+459,"regF_i_io_master_bvalid", false,-1);
    tracep->declBus(c+460,"fetch_i_pre_pc", false,-1, 31,0);
    tracep->declBit(c+1207,"fetch_i_commit", false,-1);
    tracep->declBit(c+466,"regD_o_io_master_awready", false,-1);
    tracep->declBit(c+467,"regD_o_io_master_wready", false,-1);
    tracep->declBit(c+468,"regD_o_io_master_bvalid", false,-1);
    tracep->declBus(c+465,"regD_o_instr", false,-1, 31,0);
    tracep->declBus(c+462,"regD_o_pc", false,-1, 31,0);
    tracep->declBus(c+463,"regD_o_pre_pc", false,-1, 31,0);
    tracep->declBit(c+464,"regD_o_commit", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regE ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1184,"rst", false,-1);
    tracep->declBit(c+544,"ctrl_i_regE_bubble", false,-1);
    tracep->declBus(c+469,"decode_i_valA", false,-1, 31,0);
    tracep->declBus(c+470,"decode_i_valB", false,-1, 31,0);
    tracep->declBus(c+471,"decode_i_imm", false,-1, 31,0);
    tracep->declBus(c+472,"decode_i_alu_valA_sel", false,-1, 1,0);
    tracep->declBus(c+473,"decode_i_alu_valB_sel", false,-1, 1,0);
    tracep->declBus(c+474,"decode_i_alu_func_sel", false,-1, 3,0);
    tracep->declBus(c+475,"decode_i_mem_rw", false,-1, 3,0);
    tracep->declBit(c+483,"decode_i_wb_reg_wen", false,-1);
    tracep->declBus(c+476,"decode_i_wb_rd", false,-1, 4,0);
    tracep->declBus(c+481,"decode_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+477,"decode_i_wb_valD_sel", false,-1, 1,0);
    tracep->declBit(c+484,"decode_i_need_jump", false,-1);
    tracep->declBit(c+486,"decode_i_is_jalr", false,-1);
    tracep->declBit(c+485,"decode_i_is_mret", false,-1);
    tracep->declBit(c+482,"decode_i_is_ecall", false,-1);
    tracep->declBus(c+480,"decode_i_wb_csr_sel", false,-1, 2,0);
    tracep->declBit(c+466,"regD_i_io_master_awready", false,-1);
    tracep->declBit(c+467,"regD_i_io_master_wready", false,-1);
    tracep->declBit(c+468,"regD_i_io_master_bvalid", false,-1);
    tracep->declBus(c+465,"regD_i_instr", false,-1, 31,0);
    tracep->declBus(c+462,"regD_i_pc", false,-1, 31,0);
    tracep->declBit(c+464,"regD_i_commit", false,-1);
    tracep->declBus(c+463,"regD_i_pre_pc", false,-1, 31,0);
    tracep->declBus(c+487,"regE_o_valA", false,-1, 31,0);
    tracep->declBus(c+488,"regE_o_valB", false,-1, 31,0);
    tracep->declBus(c+489,"regE_o_imm", false,-1, 31,0);
    tracep->declBus(c+490,"regE_o_alu_valA_sel", false,-1, 1,0);
    tracep->declBus(c+491,"regE_o_alu_valB_sel", false,-1, 1,0);
    tracep->declBus(c+492,"regE_o_alu_func_sel", false,-1, 3,0);
    tracep->declBus(c+493,"regE_o_mem_rw", false,-1, 3,0);
    tracep->declBit(c+503,"regE_o_wb_reg_wen", false,-1);
    tracep->declBus(c+494,"regE_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+495,"regE_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+500,"regE_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+496,"regE_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBit(c+502,"regE_o_need_jump", false,-1);
    tracep->declBit(c+507,"regE_o_io_master_awready", false,-1);
    tracep->declBit(c+508,"regE_o_io_master_wready", false,-1);
    tracep->declBit(c+509,"regE_o_io_master_bvalid", false,-1);
    tracep->declBus(c+497,"regE_o_pc", false,-1, 31,0);
    tracep->declBit(c+504,"regE_o_commit", false,-1);
    tracep->declBus(c+498,"regE_o_instr", false,-1, 31,0);
    tracep->declBus(c+499,"regE_o_pre_pc", false,-1, 31,0);
    tracep->declBit(c+501,"regE_o_is_jalr", false,-1);
    tracep->declBit(c+506,"regE_o_is_mret", false,-1);
    tracep->declBit(c+505,"regE_o_is_ecall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regF ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1184,"rst", false,-1);
    tracep->declBit(c+543,"ctrl_i_regF_stall", false,-1);
    tracep->declBus(c+456,"select_pc_o_pc", false,-1, 31,0);
    tracep->declBit(c+122,"io_master_awready", false,-1);
    tracep->declBit(c+123,"io_master_wready", false,-1);
    tracep->declBit(c+124,"io_master_bvalid", false,-1);
    tracep->declBit(c+457,"regF_o_io_master_awready", false,-1);
    tracep->declBit(c+458,"regF_o_io_master_wready", false,-1);
    tracep->declBit(c+459,"regF_o_io_master_bvalid", false,-1);
    tracep->declBus(c+452,"regF_o_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regM ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1184,"rst", false,-1);
    tracep->declBus(c+511,"execute_i_valE", false,-1, 31,0);
    tracep->declBus(c+510,"execute_i_pre_pc", false,-1, 31,0);
    tracep->declBus(c+493,"regE_i_mem_rw", false,-1, 3,0);
    tracep->declBit(c+503,"regE_i_wb_reg_wen", false,-1);
    tracep->declBus(c+494,"regE_i_wb_rd", false,-1, 4,0);
    tracep->declBus(c+500,"regE_i_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+495,"regE_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+496,"regE_i_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+488,"regE_i_valB", false,-1, 31,0);
    tracep->declBus(c+498,"regE_i_instr", false,-1, 31,0);
    tracep->declBus(c+497,"regE_i_pc", false,-1, 31,0);
    tracep->declBit(c+504,"regE_i_commit", false,-1);
    tracep->declBit(c+507,"regE_i_io_master_awready", false,-1);
    tracep->declBit(c+508,"regE_i_io_master_wready", false,-1);
    tracep->declBit(c+509,"regE_i_io_master_bvalid", false,-1);
    tracep->declBus(c+512,"regM_o_valE", false,-1, 31,0);
    tracep->declBus(c+519,"regM_o_valB", false,-1, 31,0);
    tracep->declBus(c+513,"regM_o_mem_rw", false,-1, 3,0);
    tracep->declBit(c+523,"regM_o_wb_reg_wen", false,-1);
    tracep->declBus(c+514,"regM_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+521,"regM_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+515,"regM_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+520,"regM_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBit(c+524,"regM_o_io_master_awready", false,-1);
    tracep->declBit(c+525,"regM_o_io_master_wready", false,-1);
    tracep->declBit(c+526,"regM_o_io_master_bvalid", false,-1);
    tracep->declBus(c+516,"regM_o_instr", false,-1, 31,0);
    tracep->declBus(c+517,"regM_o_pc", false,-1, 31,0);
    tracep->declBit(c+522,"regM_o_commit", false,-1);
    tracep->declBus(c+518,"regM_o_pre_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regW ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1184,"rst", false,-1);
    tracep->declBit(c+523,"regM_i_wb_reg_wen", false,-1);
    tracep->declBus(c+514,"regM_i_wb_rd", false,-1, 4,0);
    tracep->declBus(c+521,"regM_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+520,"regM_i_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+515,"regM_i_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+512,"regM_i_valE", false,-1, 31,0);
    tracep->declBus(c+527,"memory_i_valM", false,-1, 31,0);
    tracep->declBus(c+517,"regM_i_pc", false,-1, 31,0);
    tracep->declBus(c+516,"regM_i_instr", false,-1, 31,0);
    tracep->declBit(c+522,"regM_i_commit", false,-1);
    tracep->declBus(c+518,"regM_i_pre_pc", false,-1, 31,0);
    tracep->declBit(c+541,"regW_o_wb_reg_wen", false,-1);
    tracep->declBus(c+534,"regW_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+540,"regW_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+539,"regW_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+535,"regW_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+536,"regW_o_valE", false,-1, 31,0);
    tracep->declBus(c+538,"regW_o_valM", false,-1, 31,0);
    tracep->declBus(c+454,"regW_o_pc", false,-1, 31,0);
    tracep->declBus(c+537,"regW_o_instr", false,-1, 31,0);
    tracep->declBit(c+453,"regW_o_commit", false,-1);
    tracep->declBus(c+455,"regW_o_pre_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rst ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1183,"reset", false,-1);
    tracep->declBit(c+1184,"rst_o_reset", false,-1);
    tracep->declBit(c+1185,"rst_n_r1", false,-1);
    tracep->declBit(c+1184,"rst_n_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_select_pc ");
    tracep->declBus(c+460,"fetch_i_pre_pc", false,-1, 31,0);
    tracep->declBus(c+510,"execute_i_pre_pc", false,-1, 31,0);
    tracep->declBit(c+502,"execute_i_need_jump", false,-1);
    tracep->declBus(c+456,"select_pc_o_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_write_back ");
    tracep->declBit(c+541,"regW_i_wb_reg_wen", false,-1);
    tracep->declBus(c+534,"regW_i_wb_rd", false,-1, 4,0);
    tracep->declBus(c+540,"regW_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+535,"regW_i_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+539,"regW_i_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+538,"regW_i_valM", false,-1, 31,0);
    tracep->declBus(c+454,"regW_i_pc", false,-1, 31,0);
    tracep->declBus(c+536,"regW_i_valE", false,-1, 31,0);
    tracep->declBus(c+537,"regW_i_instr", false,-1, 31,0);
    tracep->declBit(c+541,"write_back_o_wb_reg_wen", false,-1);
    tracep->declBus(c+534,"write_back_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+540,"write_back_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+539,"write_back_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+542,"write_back_o_wb_valD", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"io_d", false,-1);
    tracep->declBit(c+677,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"io_d", false,-1);
    tracep->declBit(c+677,"io_q", false,-1);
    tracep->declBit(c+677,"sync_0", false,-1);
    tracep->declBit(c+678,"sync_1", false,-1);
    tracep->declBit(c+679,"sync_2", false,-1);
    tracep->declBit(c+680,"sync_3", false,-1);
    tracep->declBit(c+681,"sync_4", false,-1);
    tracep->declBit(c+682,"sync_5", false,-1);
    tracep->declBit(c+683,"sync_6", false,-1);
    tracep->declBit(c+684,"sync_7", false,-1);
    tracep->declBit(c+685,"sync_8", false,-1);
    tracep->declBit(c+686,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+734,"auto_in_psel", false,-1);
    tracep->declBit(c+735,"auto_in_penable", false,-1);
    tracep->declBit(c+1019,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1024,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1196,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1020,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1204,"auto_in_pready", false,-1);
    tracep->declBit(c+1205,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1206,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1152,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1153,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1154,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1155,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1156,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1157,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1158,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1159,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1160,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1161,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1040,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+734,"in_psel", false,-1);
    tracep->declBit(c+735,"in_penable", false,-1);
    tracep->declBus(c+1196,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1019,"in_pwrite", false,-1);
    tracep->declBus(c+1020,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1204,"in_pready", false,-1);
    tracep->declBus(c+1206,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1205,"in_pslverr", false,-1);
    tracep->declBus(c+1152,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1153,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1154,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1155,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1156,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1157,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1158,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1159,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1160,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1161,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+732,"auto_in_psel", false,-1);
    tracep->declBit(c+733,"auto_in_penable", false,-1);
    tracep->declBit(c+1019,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1024,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1196,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1020,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1201,"auto_in_pready", false,-1);
    tracep->declBit(c+1202,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1203,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1162,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1163,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1040,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+732,"in_psel", false,-1);
    tracep->declBit(c+733,"in_penable", false,-1);
    tracep->declBus(c+1196,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1019,"in_pwrite", false,-1);
    tracep->declBus(c+1020,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1201,"in_pready", false,-1);
    tracep->declBus(c+1203,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1202,"in_pslverr", false,-1);
    tracep->declBit(c+1162,"ps2_clk", false,-1);
    tracep->declBit(c+1163,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1113,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1114,"auto_in_wvalid", false,-1);
    tracep->declBit(c+208,"auto_in_arready", false,-1);
    tracep->declBit(c+209,"auto_in_arvalid", false,-1);
    tracep->declBus(c+47,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+210,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+211,"auto_in_rready", false,-1);
    tracep->declBit(c+212,"auto_in_rvalid", false,-1);
    tracep->declBus(c+213,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+214,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+212,"state", false,-1);
    tracep->declBus(c+214,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+213,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+687,"raddr", false,-1, 31,0);
    tracep->declBit(c+688,"ren", false,-1);
    tracep->declBus(c+689,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1025,"auto_in_psel", false,-1);
    tracep->declBit(c+736,"auto_in_penable", false,-1);
    tracep->declBit(c+1019,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1018,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1196,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1020,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1177,"auto_in_pready", false,-1);
    tracep->declBit(c+1197,"auto_in_pslverr", false,-1);
    tracep->declBus(c+10,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1174,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1175,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1129,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1018,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1025,"in_psel", false,-1);
    tracep->declBit(c+736,"in_penable", false,-1);
    tracep->declBus(c+1196,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1019,"in_pwrite", false,-1);
    tracep->declBus(c+1020,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1177,"in_pready", false,-1);
    tracep->declBus(c+10,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1197,"in_pslverr", false,-1);
    tracep->declBit(c+1174,"qspi_sck", false,-1);
    tracep->declBit(c+1175,"qspi_ce_n", false,-1);
    tracep->declBus(c+1129,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1129,"din", false,-1, 3,0);
    tracep->declBus(c+1136,"dout", false,-1, 3,0);
    tracep->declBus(c+1137,"douten", false,-1, 3,0);
    tracep->declBit(c+1186,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1150,"clk_i", false,-1);
    tracep->declBit(c+1151,"rst_i", false,-1);
    tracep->declBus(c+1018,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1020,"dat_i", false,-1, 31,0);
    tracep->declBus(c+10,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1021,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1025,"cyc_i", false,-1);
    tracep->declBit(c+1025,"stb_i", false,-1);
    tracep->declBit(c+1186,"ack_o", false,-1);
    tracep->declBit(c+1019,"we_i", false,-1);
    tracep->declBit(c+1174,"sck", false,-1);
    tracep->declBit(c+1175,"ce_n", false,-1);
    tracep->declBus(c+1129,"din", false,-1, 3,0);
    tracep->declBus(c+1136,"dout", false,-1, 3,0);
    tracep->declBus(c+1137,"douten", false,-1, 3,0);
    tracep->declBus(c+1220,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1221,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+788,"mr_sck", false,-1);
    tracep->declBit(c+789,"mr_ce_n", false,-1);
    tracep->declBus(c+1129,"mr_din", false,-1, 3,0);
    tracep->declBus(c+790,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+791,"mr_doe", false,-1);
    tracep->declBit(c+792,"mw_sck", false,-1);
    tracep->declBit(c+793,"mw_ce_n", false,-1);
    tracep->declBus(c+1129,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1138,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+794,"mw_doe", false,-1);
    tracep->declBit(c+1139,"mr_rd", false,-1);
    tracep->declBit(c+795,"mr_done", false,-1);
    tracep->declBit(c+1140,"mw_wr", false,-1);
    tracep->declBit(c+1141,"mw_done", false,-1);
    tracep->declBit(c+1025,"wb_valid", false,-1);
    tracep->declBit(c+1041,"wb_we", false,-1);
    tracep->declBit(c+1042,"wb_re", false,-1);
    tracep->declBit(c+796,"state", false,-1);
    tracep->declBit(c+1142,"nstate", false,-1);
    tracep->declBus(c+1043,"size", false,-1, 2,0);
    tracep->declBus(c+1044,"byte0", false,-1, 7,0);
    tracep->declBus(c+1045,"byte1", false,-1, 7,0);
    tracep->declBus(c+1046,"byte2", false,-1, 7,0);
    tracep->declBus(c+1047,"byte3", false,-1, 7,0);
    tracep->declBus(c+1048,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1187,"rst_n", false,-1);
    tracep->declBus(c+1049,"addr", false,-1, 23,0);
    tracep->declBit(c+1139,"rd", false,-1);
    tracep->declBus(c+1222,"size", false,-1, 2,0);
    tracep->declBit(c+795,"done", false,-1);
    tracep->declBus(c+10,"line", false,-1, 31,0);
    tracep->declBit(c+788,"sck", false,-1);
    tracep->declBit(c+789,"ce_n", false,-1);
    tracep->declBus(c+1129,"din", false,-1, 3,0);
    tracep->declBus(c+790,"dout", false,-1, 3,0);
    tracep->declBit(c+791,"douten", false,-1);
    tracep->declBus(c+1220,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1221,"READ", false,-1, 0,0);
    tracep->declBus(c+1223,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+797,"state", false,-1);
    tracep->declBit(c+1143,"nstate", false,-1);
    tracep->declBus(c+798,"counter", false,-1, 7,0);
    tracep->declBus(c+799,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+690+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1224,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+800,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1187,"rst_n", false,-1);
    tracep->declBus(c+1050,"addr", false,-1, 23,0);
    tracep->declBus(c+1048,"line", false,-1, 31,0);
    tracep->declBus(c+1043,"size", false,-1, 2,0);
    tracep->declBit(c+1140,"wr", false,-1);
    tracep->declBit(c+1141,"done", false,-1);
    tracep->declBit(c+792,"sck", false,-1);
    tracep->declBit(c+793,"ce_n", false,-1);
    tracep->declBus(c+1129,"din", false,-1, 3,0);
    tracep->declBus(c+1138,"dout", false,-1, 3,0);
    tracep->declBit(c+794,"douten", false,-1);
    tracep->declBus(c+1220,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1221,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1051,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+801,"state", false,-1);
    tracep->declBit(c+1144,"nstate", false,-1);
    tracep->declBus(c+802,"counter", false,-1, 7,0);
    tracep->declBus(c+803,"saddr", false,-1, 23,0);
    tracep->declBus(c+1225,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+728,"auto_in_psel", false,-1);
    tracep->declBit(c+729,"auto_in_penable", false,-1);
    tracep->declBit(c+1019,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1018,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1196,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1020,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+784,"auto_in_pready", false,-1);
    tracep->declBit(c+1197,"auto_in_pslverr", false,-1);
    tracep->declBus(c+785,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1176,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+775,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+776,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+777,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+778,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+779,"sdram_bundle_we", false,-1);
    tracep->declBus(c+780,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+781,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+782,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+783,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1018,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+728,"in_psel", false,-1);
    tracep->declBit(c+729,"in_penable", false,-1);
    tracep->declBus(c+1196,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1019,"in_pwrite", false,-1);
    tracep->declBus(c+1020,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+784,"in_pready", false,-1);
    tracep->declBus(c+785,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1197,"in_pslverr", false,-1);
    tracep->declBit(c+1176,"sdram_clk", false,-1);
    tracep->declBit(c+775,"sdram_cke", false,-1);
    tracep->declBit(c+776,"sdram_cs", false,-1);
    tracep->declBit(c+777,"sdram_ras", false,-1);
    tracep->declBit(c+778,"sdram_cas", false,-1);
    tracep->declBit(c+779,"sdram_we", false,-1);
    tracep->declBus(c+780,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+781,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+782,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+783,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+804,"sdram_dout_en", false,-1);
    tracep->declBus(c+805,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+694,"state", false,-1, 1,0);
    tracep->declBit(c+806,"req_accept", false,-1);
    tracep->declBit(c+1052,"is_read", false,-1);
    tracep->declBit(c+1053,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1150,"clk_i", false,-1);
    tracep->declBit(c+1151,"rst_i", false,-1);
    tracep->declBus(c+1054,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1052,"inport_rd_i", false,-1);
    tracep->declBus(c+1209,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1018,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1020,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+783,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+806,"inport_accept_o", false,-1);
    tracep->declBit(c+784,"inport_ack_o", false,-1);
    tracep->declBit(c+1197,"inport_error_o", false,-1);
    tracep->declBus(c+785,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1176,"sdram_clk_o", false,-1);
    tracep->declBit(c+775,"sdram_cke_o", false,-1);
    tracep->declBit(c+776,"sdram_cs_o", false,-1);
    tracep->declBit(c+777,"sdram_ras_o", false,-1);
    tracep->declBit(c+778,"sdram_cas_o", false,-1);
    tracep->declBit(c+779,"sdram_we_o", false,-1);
    tracep->declBus(c+782,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+780,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+781,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+805,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+804,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1226,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1227,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1228,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1229,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1229,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1229,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1230,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1231,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1232,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1233,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1234,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1230,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1235,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1236,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1237,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1238,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1239,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1240,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1241,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1208,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1242,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1230,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1208,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1241,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1240,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1236,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1238,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1237,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1239,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1235,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1243,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1244,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1245,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1245,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1246,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1245,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1229,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1229,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1247,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1018,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1054,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1052,"ram_rd_w", false,-1);
    tracep->declBit(c+806,"ram_accept_w", false,-1);
    tracep->declBus(c+1020,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+785,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+784,"ram_ack_w", false,-1);
    tracep->declBit(c+1055,"ram_req_w", false,-1);
    tracep->declBus(c+807,"command_q", false,-1, 3,0);
    tracep->declBus(c+780,"addr_q", false,-1, 12,0);
    tracep->declBus(c+805,"data_q", false,-1, 15,0);
    tracep->declBit(c+808,"data_rd_en_q", false,-1);
    tracep->declBus(c+782,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+775,"cke_q", false,-1);
    tracep->declBus(c+781,"bank_q", false,-1, 1,0);
    tracep->declBus(c+809,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+810,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+783,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+811,"refresh_q", false,-1);
    tracep->declBus(c+812,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+813+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+817,"state_q", false,-1, 3,0);
    tracep->declBus(c+1145,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1146,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+818,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+819,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1056,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1057,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1058,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1230,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+820,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1147,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1248,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+821,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+822,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+823,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+824,"idx", false,-1, 31,0);
    tracep->declBus(c+825,"rd_q", false,-1, 3,0);
    tracep->declBit(c+784,"ack_q", false,-1);
    tracep->declArray(c+826,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1029,"auto_in_psel", false,-1);
    tracep->declBit(c+1030,"auto_in_penable", false,-1);
    tracep->declBit(c+1019,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1023,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1196,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1020,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+786,"auto_in_pready", false,-1);
    tracep->declBit(c+1197,"auto_in_pslverr", false,-1);
    tracep->declBus(c+787,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+773,"spi_bundle_sck", false,-1);
    tracep->declBus(c+774,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1172,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1173,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1249,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1250,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1251,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1059,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1029,"in_psel", false,-1);
    tracep->declBit(c+1030,"in_penable", false,-1);
    tracep->declBus(c+1196,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1019,"in_pwrite", false,-1);
    tracep->declBus(c+1020,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+786,"in_pready", false,-1);
    tracep->declBus(c+787,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1197,"in_pslverr", false,-1);
    tracep->declBit(c+773,"spi_sck", false,-1);
    tracep->declBus(c+774,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1172,"spi_mosi", false,-1);
    tracep->declBit(c+1173,"spi_miso", false,-1);
    tracep->declBit(c+829,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1252,"Tp", false,-1, 31,0);
    tracep->declBit(c+1150,"wb_clk_i", false,-1);
    tracep->declBit(c+1151,"wb_rst_i", false,-1);
    tracep->declBus(c+1060,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1020,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+787,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1021,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1019,"wb_we_i", false,-1);
    tracep->declBit(c+1029,"wb_stb_i", false,-1);
    tracep->declBit(c+1030,"wb_cyc_i", false,-1);
    tracep->declBit(c+786,"wb_ack_o", false,-1);
    tracep->declBit(c+1197,"wb_err_o", false,-1);
    tracep->declBit(c+829,"wb_int_o", false,-1);
    tracep->declBus(c+774,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+773,"sclk_pad_o", false,-1);
    tracep->declBit(c+1172,"mosi_pad_o", false,-1);
    tracep->declBit(c+1173,"miso_pad_i", false,-1);
    tracep->declBus(c+830,"divider", false,-1, 15,0);
    tracep->declBus(c+831,"ctrl", false,-1, 13,0);
    tracep->declBus(c+832,"ss", false,-1, 7,0);
    tracep->declBus(c+1148,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+833,"rx", false,-1, 127,0);
    tracep->declBit(c+837,"rx_negedge", false,-1);
    tracep->declBit(c+838,"tx_negedge", false,-1);
    tracep->declBus(c+839,"char_len", false,-1, 6,0);
    tracep->declBit(c+840,"go", false,-1);
    tracep->declBit(c+841,"lsb", false,-1);
    tracep->declBit(c+842,"ie", false,-1);
    tracep->declBit(c+843,"ass", false,-1);
    tracep->declBit(c+1061,"spi_divider_sel", false,-1);
    tracep->declBit(c+1062,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1063,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1064,"spi_ss_sel", false,-1);
    tracep->declBit(c+844,"tip", false,-1);
    tracep->declBit(c+845,"pos_edge", false,-1);
    tracep->declBit(c+846,"neg_edge", false,-1);
    tracep->declBit(c+847,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1252,"Tp", false,-1, 31,0);
    tracep->declBit(c+1150,"clk_in", false,-1);
    tracep->declBit(c+1151,"rst", false,-1);
    tracep->declBit(c+844,"enable", false,-1);
    tracep->declBit(c+840,"go", false,-1);
    tracep->declBit(c+847,"last_clk", false,-1);
    tracep->declBus(c+830,"divider", false,-1, 15,0);
    tracep->declBit(c+773,"clk_out", false,-1);
    tracep->declBit(c+845,"pos_edge", false,-1);
    tracep->declBit(c+846,"neg_edge", false,-1);
    tracep->declBus(c+848,"cnt", false,-1, 15,0);
    tracep->declBit(c+849,"cnt_zero", false,-1);
    tracep->declBit(c+850,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1252,"Tp", false,-1, 31,0);
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1151,"rst", false,-1);
    tracep->declBus(c+1065,"latch", false,-1, 3,0);
    tracep->declBus(c+1021,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+839,"len", false,-1, 6,0);
    tracep->declBit(c+841,"lsb", false,-1);
    tracep->declBit(c+840,"go", false,-1);
    tracep->declBit(c+845,"pos_edge", false,-1);
    tracep->declBit(c+846,"neg_edge", false,-1);
    tracep->declBit(c+837,"rx_negedge", false,-1);
    tracep->declBit(c+838,"tx_negedge", false,-1);
    tracep->declBit(c+844,"tip", false,-1);
    tracep->declBit(c+847,"last", false,-1);
    tracep->declBus(c+1020,"p_in", false,-1, 31,0);
    tracep->declArray(c+833,"p_out", false,-1, 127,0);
    tracep->declBit(c+773,"s_clk", false,-1);
    tracep->declBit(c+1173,"s_in", false,-1);
    tracep->declBit(c+1172,"s_out", false,-1);
    tracep->declBus(c+851,"cnt", false,-1, 7,0);
    tracep->declArray(c+833,"data", false,-1, 127,0);
    tracep->declBus(c+852,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+853,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+854,"rx_clk", false,-1);
    tracep->declBit(c+855,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1026,"auto_in_psel", false,-1);
    tracep->declBit(c+1027,"auto_in_penable", false,-1);
    tracep->declBit(c+1019,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1024,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1196,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1020,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1028,"auto_in_pready", false,-1);
    tracep->declBit(c+1197,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1178,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1170,"uart_rx", false,-1);
    tracep->declBit(c+1171,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1026,"in_psel", false,-1);
    tracep->declBit(c+1027,"in_penable", false,-1);
    tracep->declBus(c+1196,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1028,"in_pready", false,-1);
    tracep->declBit(c+1197,"in_pslverr", false,-1);
    tracep->declBus(c+1040,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1019,"in_pwrite", false,-1);
    tracep->declBus(c+1178,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1020,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1170,"uart_rx", false,-1);
    tracep->declBit(c+1171,"uart_tx", false,-1);
    tracep->declBit(c+856,"rtsn", false,-1);
    tracep->declBit(c+1197,"ctsn", false,-1);
    tracep->declBit(c+857,"dtr_pad_o", false,-1);
    tracep->declBit(c+1197,"dsr_pad_i", false,-1);
    tracep->declBit(c+1197,"ri_pad_i", false,-1);
    tracep->declBit(c+1197,"dcd_pad_i", false,-1);
    tracep->declBit(c+858,"interrupt", false,-1);
    tracep->declBit(c+1188,"reg_we", false,-1);
    tracep->declBit(c+1189,"reg_re", false,-1);
    tracep->declBus(c+1066,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1067,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+695,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1149,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+859,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1151,"wb_rst_i", false,-1);
    tracep->declBus(c+1066,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1068,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1149,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1188,"wb_we_i", false,-1);
    tracep->declBit(c+1189,"wb_re_i", false,-1);
    tracep->declBit(c+1171,"stx_pad_o", false,-1);
    tracep->declBit(c+1170,"srx_pad_i", false,-1);
    tracep->declBus(c+1243,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+859,"rts_pad_o", false,-1);
    tracep->declBit(c+857,"dtr_pad_o", false,-1);
    tracep->declBit(c+858,"int_o", false,-1);
    tracep->declBit(c+860,"enable", false,-1);
    tracep->declBit(c+861,"srx_pad", false,-1);
    tracep->declBus(c+862,"ier", false,-1, 3,0);
    tracep->declBus(c+863,"iir", false,-1, 3,0);
    tracep->declBus(c+864,"fcr", false,-1, 1,0);
    tracep->declBus(c+865,"mcr", false,-1, 4,0);
    tracep->declBus(c+866,"lcr", false,-1, 7,0);
    tracep->declBus(c+867,"msr", false,-1, 7,0);
    tracep->declBus(c+868,"dl", false,-1, 15,0);
    tracep->declBus(c+869,"scratch", false,-1, 7,0);
    tracep->declBit(c+870,"start_dlc", false,-1);
    tracep->declBit(c+871,"lsr_mask_d", false,-1);
    tracep->declBit(c+872,"msi_reset", false,-1);
    tracep->declBus(c+873,"dlc", false,-1, 15,0);
    tracep->declBus(c+874,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+875,"rx_reset", false,-1);
    tracep->declBit(c+876,"tx_reset", false,-1);
    tracep->declBit(c+877,"dlab", false,-1);
    tracep->declBit(c+1207,"cts_pad_i", false,-1);
    tracep->declBit(c+1197,"dsr_pad_i", false,-1);
    tracep->declBit(c+1197,"ri_pad_i", false,-1);
    tracep->declBit(c+1197,"dcd_pad_i", false,-1);
    tracep->declBit(c+878,"loopback", false,-1);
    tracep->declBit(c+1197,"cts", false,-1);
    tracep->declBit(c+1207,"dsr", false,-1);
    tracep->declBit(c+1207,"ri", false,-1);
    tracep->declBit(c+1207,"dcd", false,-1);
    tracep->declBit(c+879,"cts_c", false,-1);
    tracep->declBit(c+880,"dsr_c", false,-1);
    tracep->declBit(c+881,"ri_c", false,-1);
    tracep->declBit(c+882,"dcd_c", false,-1);
    tracep->declBus(c+883,"lsr", false,-1, 7,0);
    tracep->declBit(c+884,"lsr0", false,-1);
    tracep->declBit(c+885,"lsr1", false,-1);
    tracep->declBit(c+886,"lsr2", false,-1);
    tracep->declBit(c+887,"lsr3", false,-1);
    tracep->declBit(c+888,"lsr4", false,-1);
    tracep->declBit(c+889,"lsr5", false,-1);
    tracep->declBit(c+890,"lsr6", false,-1);
    tracep->declBit(c+891,"lsr7", false,-1);
    tracep->declBit(c+892,"lsr0r", false,-1);
    tracep->declBit(c+893,"lsr1r", false,-1);
    tracep->declBit(c+894,"lsr2r", false,-1);
    tracep->declBit(c+895,"lsr3r", false,-1);
    tracep->declBit(c+896,"lsr4r", false,-1);
    tracep->declBit(c+897,"lsr5r", false,-1);
    tracep->declBit(c+898,"lsr6r", false,-1);
    tracep->declBit(c+899,"lsr7r", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+900,"rls_int", false,-1);
    tracep->declBit(c+901,"rda_int", false,-1);
    tracep->declBit(c+902,"ti_int", false,-1);
    tracep->declBit(c+903,"thre_int", false,-1);
    tracep->declBit(c+904,"ms_int", false,-1);
    tracep->declBit(c+905,"tf_push", false,-1);
    tracep->declBit(c+906,"rf_pop", false,-1);
    tracep->declBus(c+1190,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+907,"rf_error_bit", false,-1);
    tracep->declBit(c+885,"rf_overrun", false,-1);
    tracep->declBit(c+908,"rf_push_pulse", false,-1);
    tracep->declBus(c+909,"rf_count", false,-1, 4,0);
    tracep->declBus(c+910,"tf_count", false,-1, 4,0);
    tracep->declBus(c+911,"tstate", false,-1, 2,0);
    tracep->declBus(c+912,"rstate", false,-1, 3,0);
    tracep->declBus(c+913,"counter_t", false,-1, 9,0);
    tracep->declBit(c+914,"thre_set_en", false,-1);
    tracep->declBus(c+915,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+916,"block_value", false,-1, 7,0);
    tracep->declBit(c+917,"serial_out", false,-1);
    tracep->declBit(c+918,"serial_in", false,-1);
    tracep->declBit(c+3,"lsr_mask_condition", false,-1);
    tracep->declBit(c+4,"iir_read", false,-1);
    tracep->declBit(c+5,"msr_read", false,-1);
    tracep->declBit(c+6,"fifo_read", false,-1);
    tracep->declBit(c+7,"fifo_write", false,-1);
    tracep->declBus(c+919,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+920,"lsr0_d", false,-1);
    tracep->declBit(c+921,"lsr1_d", false,-1);
    tracep->declBit(c+922,"lsr2_d", false,-1);
    tracep->declBit(c+923,"lsr3_d", false,-1);
    tracep->declBit(c+924,"lsr4_d", false,-1);
    tracep->declBit(c+925,"lsr5_d", false,-1);
    tracep->declBit(c+926,"lsr6_d", false,-1);
    tracep->declBit(c+927,"lsr7_d", false,-1);
    tracep->declBit(c+928,"rls_int_d", false,-1);
    tracep->declBit(c+929,"thre_int_d", false,-1);
    tracep->declBit(c+930,"ms_int_d", false,-1);
    tracep->declBit(c+931,"ti_int_d", false,-1);
    tracep->declBit(c+932,"rda_int_d", false,-1);
    tracep->declBit(c+933,"rls_int_rise", false,-1);
    tracep->declBit(c+934,"thre_int_rise", false,-1);
    tracep->declBit(c+935,"ms_int_rise", false,-1);
    tracep->declBit(c+936,"ti_int_rise", false,-1);
    tracep->declBit(c+937,"rda_int_rise", false,-1);
    tracep->declBit(c+938,"rls_int_pnd", false,-1);
    tracep->declBit(c+939,"rda_int_pnd", false,-1);
    tracep->declBit(c+940,"thre_int_pnd", false,-1);
    tracep->declBit(c+941,"ms_int_pnd", false,-1);
    tracep->declBit(c+942,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1252,"Tp", false,-1, 31,0);
    tracep->declBus(c+1252,"width", false,-1, 31,0);
    tracep->declBus(c+1221,"init_value", false,-1, 0,0);
    tracep->declBit(c+1151,"rst_i", false,-1);
    tracep->declBit(c+1150,"clk_i", false,-1);
    tracep->declBit(c+1197,"stage1_rst_i", false,-1);
    tracep->declBit(c+1207,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1170,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+861,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+943,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1151,"wb_rst_i", false,-1);
    tracep->declBus(c+866,"lcr", false,-1, 7,0);
    tracep->declBit(c+906,"rf_pop", false,-1);
    tracep->declBit(c+918,"srx_pad_i", false,-1);
    tracep->declBit(c+860,"enable", false,-1);
    tracep->declBit(c+875,"rx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBus(c+913,"counter_t", false,-1, 9,0);
    tracep->declBus(c+909,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1190,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+885,"rf_overrun", false,-1);
    tracep->declBit(c+907,"rf_error_bit", false,-1);
    tracep->declBus(c+912,"rstate", false,-1, 3,0);
    tracep->declBit(c+908,"rf_push_pulse", false,-1);
    tracep->declBus(c+944,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+945,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+946,"rshift", false,-1, 7,0);
    tracep->declBit(c+947,"rparity", false,-1);
    tracep->declBit(c+948,"rparity_error", false,-1);
    tracep->declBit(c+949,"rframing_error", false,-1);
    tracep->declBit(c+950,"rbit_in", false,-1);
    tracep->declBit(c+951,"rparity_xor", false,-1);
    tracep->declBus(c+952,"counter_b", false,-1, 7,0);
    tracep->declBit(c+953,"rf_push_q", false,-1);
    tracep->declBus(c+954,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+955,"rf_push", false,-1);
    tracep->declBit(c+956,"break_error", false,-1);
    tracep->declBit(c+957,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+958,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+959,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+960,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1208,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1241,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1240,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1236,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1238,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1237,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1239,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1235,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1243,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1244,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1253,"sr_push", false,-1, 3,0);
    tracep->declBus(c+961,"toc_value", false,-1, 9,0);
    tracep->declBus(c+962,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1254,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1246,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1230,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1255,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1151,"wb_rst_i", false,-1);
    tracep->declBit(c+908,"push", false,-1);
    tracep->declBit(c+906,"pop", false,-1);
    tracep->declBus(c+954,"data_in", false,-1, 10,0);
    tracep->declBit(c+875,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+1190,"data_out", false,-1, 10,0);
    tracep->declBit(c+885,"overrun", false,-1);
    tracep->declBus(c+909,"count", false,-1, 4,0);
    tracep->declBit(c+907,"error_bit", false,-1);
    tracep->declBus(c+1191,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+963+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+979,"top", false,-1, 3,0);
    tracep->declBus(c+980,"bottom", false,-1, 3,0);
    tracep->declBus(c+981,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+982,"word0", false,-1, 2,0);
    tracep->declBus(c+983,"word1", false,-1, 2,0);
    tracep->declBus(c+984,"word2", false,-1, 2,0);
    tracep->declBus(c+985,"word3", false,-1, 2,0);
    tracep->declBus(c+986,"word4", false,-1, 2,0);
    tracep->declBus(c+987,"word5", false,-1, 2,0);
    tracep->declBus(c+988,"word6", false,-1, 2,0);
    tracep->declBus(c+989,"word7", false,-1, 2,0);
    tracep->declBus(c+990,"word8", false,-1, 2,0);
    tracep->declBus(c+991,"word9", false,-1, 2,0);
    tracep->declBus(c+992,"word10", false,-1, 2,0);
    tracep->declBus(c+993,"word11", false,-1, 2,0);
    tracep->declBus(c+994,"word12", false,-1, 2,0);
    tracep->declBus(c+995,"word13", false,-1, 2,0);
    tracep->declBus(c+996,"word14", false,-1, 2,0);
    tracep->declBus(c+997,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1230,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1251,"data_width", false,-1, 31,0);
    tracep->declBus(c+1246,"depth", false,-1, 31,0);
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+908,"we", false,-1);
    tracep->declBus(c+979,"a", false,-1, 3,0);
    tracep->declBus(c+980,"dpra", false,-1, 3,0);
    tracep->declBus(c+998,"di", false,-1, 7,0);
    tracep->declBus(c+1191,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+696+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1151,"wb_rst_i", false,-1);
    tracep->declBus(c+866,"lcr", false,-1, 7,0);
    tracep->declBit(c+905,"tf_push", false,-1);
    tracep->declBus(c+1068,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+860,"enable", false,-1);
    tracep->declBit(c+876,"tx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+917,"stx_pad_o", false,-1);
    tracep->declBus(c+911,"tstate", false,-1, 2,0);
    tracep->declBus(c+910,"tf_count", false,-1, 4,0);
    tracep->declBus(c+999,"counter", false,-1, 4,0);
    tracep->declBus(c+1000,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1001,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1002,"stx_o_tmp", false,-1);
    tracep->declBit(c+1003,"parity_xor", false,-1);
    tracep->declBit(c+1004,"tf_pop", false,-1);
    tracep->declBit(c+1005,"bit_out", false,-1);
    tracep->declBus(c+1068,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1192,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1006,"tf_overrun", false,-1);
    tracep->declBus(c+1216,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1196,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1256,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1257,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1222,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1258,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1251,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1246,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1230,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1255,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1151,"wb_rst_i", false,-1);
    tracep->declBit(c+905,"push", false,-1);
    tracep->declBit(c+1004,"pop", false,-1);
    tracep->declBus(c+1068,"data_in", false,-1, 7,0);
    tracep->declBit(c+876,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+1192,"data_out", false,-1, 7,0);
    tracep->declBit(c+1006,"overrun", false,-1);
    tracep->declBus(c+910,"count", false,-1, 4,0);
    tracep->declBus(c+1007,"top", false,-1, 3,0);
    tracep->declBus(c+1008,"bottom", false,-1, 3,0);
    tracep->declBus(c+1009,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1230,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1251,"data_width", false,-1, 31,0);
    tracep->declBus(c+1246,"depth", false,-1, 31,0);
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+905,"we", false,-1);
    tracep->declBus(c+1007,"a", false,-1, 3,0);
    tracep->declBus(c+1008,"dpra", false,-1, 3,0);
    tracep->declBus(c+1068,"di", false,-1, 7,0);
    tracep->declBus(c+1192,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+712+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+730,"auto_in_psel", false,-1);
    tracep->declBit(c+731,"auto_in_penable", false,-1);
    tracep->declBit(c+1019,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1023,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1196,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1020,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1198,"auto_in_pready", false,-1);
    tracep->declBit(c+1199,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1200,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1164,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1165,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1166,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1167,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1168,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1169,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1059,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+730,"in_psel", false,-1);
    tracep->declBit(c+731,"in_penable", false,-1);
    tracep->declBus(c+1196,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1019,"in_pwrite", false,-1);
    tracep->declBus(c+1020,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1021,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1198,"in_pready", false,-1);
    tracep->declBus(c+1200,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1199,"in_pslverr", false,-1);
    tracep->declBus(c+1164,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1165,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1166,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1167,"vga_hsync", false,-1);
    tracep->declBit(c+1168,"vga_vsync", false,-1);
    tracep->declBit(c+1169,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+773,"sck", false,-1);
    tracep->declBit(c+1010,"ss", false,-1);
    tracep->declBit(c+1172,"mosi", false,-1);
    tracep->declBit(c+1207,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+773,"sck", false,-1);
    tracep->declBit(c+1011,"ss", false,-1);
    tracep->declBit(c+1172,"mosi", false,-1);
    tracep->declBit(c+1173,"miso", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBus(c+1012,"state", false,-1, 2,0);
    tracep->declBus(c+1013,"counter", false,-1, 7,0);
    tracep->declBus(c+1014,"cmd", false,-1, 7,0);
    tracep->declBus(c+1015,"addr", false,-1, 23,0);
    tracep->declBus(c+1016,"data", false,-1, 31,0);
    tracep->declBit(c+1017,"ren", false,-1);
    tracep->declBus(c+1193,"rdata", false,-1, 31,0);
    tracep->declBus(c+1194,"raddr", false,-1, 31,0);
    tracep->declBus(c+1195,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+773,"clock", false,-1);
    tracep->declBit(c+1017,"valid", false,-1);
    tracep->declBus(c+1014,"cmd", false,-1, 7,0);
    tracep->declBus(c+1194,"addr", false,-1, 31,0);
    tracep->declBus(c+1193,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1174,"sck", false,-1);
    tracep->declBit(c+1175,"ce_n", false,-1);
    tracep->declBus(c+1129,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+775,"cke", false,-1);
    tracep->declBit(c+776,"cs", false,-1);
    tracep->declBit(c+777,"ras", false,-1);
    tracep->declBit(c+778,"cas", false,-1);
    tracep->declBit(c+779,"we", false,-1);
    tracep->declBus(c+780,"a", false,-1, 12,0);
    tracep->declBus(c+781,"ba", false,-1, 1,0);
    tracep->declBus(c+782,"dqm", false,-1, 1,0);
    tracep->declBus(c+783,"dq", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+9,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+10,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+12,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+13,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+14,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+15,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+16,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+17,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+18,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+19,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+20,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+23,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+24,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+25,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+26,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+27,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+28,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+38,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+41,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+42,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+43,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                      >> 2U))),4);
    bufp->fullCData(oldp+44,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+45,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+46,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+51,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullBit(oldp+52,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+53,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x23U)))),4);
    bufp->fullIData(oldp+54,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                      >> 3U))),32);
    bufp->fullCData(oldp+55,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 1U)))),2);
    bufp->fullBit(oldp+56,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+89,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                             << 0xbU) 
                                            | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+122,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+123,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+124,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+126,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullBit(oldp+127,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+130,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 3U))
                                 : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                   [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                         ? 
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                         [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                         >> 0x10U)
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? 
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                            [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                            >> 8U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                             ? 
                                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                            [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
                                                             : 0U)
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                            : 0U)))),32);
    bufp->fullCData(oldp+131,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+132,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
    bufp->fullBit(oldp+133,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+139,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+140,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+142,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullQData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+181,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)))));
    bufp->fullQData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+187,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+189,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+190,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+194,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                      ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                         [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                    [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                       [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? 
                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                       [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+195,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullSData(oldp+204,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullIData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+208,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+209,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+210,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+211,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullSData(oldp+218,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+219,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+220,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+221,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+282,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+292,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+293,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+294,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+298,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+299,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+300,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+304,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+305,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+306,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+310,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+311,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+312,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+316,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+317,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+318,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+322,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+323,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+324,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+328,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+329,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+330,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+334,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+335,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+336,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+340,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+344,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+348,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+352,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+356,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+357,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+358,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+362,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+366,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+370,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+374,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+378,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+382,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+386,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+390,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+394,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+398,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+402,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+403,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+404,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+408,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+412,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+416,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+417,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+418,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+422,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+423,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+424,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+428,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+429,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+430,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+434,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+435,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+436,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+440,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+441,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+442,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+446,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+447,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+448,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regF_o_pc),32);
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_commit));
    bufp->fullIData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_pc),32);
    bufp->fullIData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_pre_pc),32);
    bufp->fullIData(oldp+456,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_need_jump)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__execute_o_pre_pc
                                : ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regF_o_pc))),32);
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regF_o_io_master_awready));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regF_o_io_master_wready));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regF_o_io_master_bvalid));
    bufp->fullIData(oldp+460,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regF_o_pc)),32);
    bufp->fullIData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_o_instr),32);
    bufp->fullIData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_pc),32);
    bufp->fullIData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_pre_pc),32);
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_commit));
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr),32);
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_io_master_awready));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_io_master_wready));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_io_master_bvalid));
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valA),32);
    bufp->fullIData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valB),32);
    bufp->fullIData(oldp+471,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_csrrs) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_csrrw))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__regfile_o_valB
                                : ((0x33U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))
                                    ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__opcode_U_TYPE)
                                             ? (0xfffff000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)
                                             : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_TYPE)
                                                 ? 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_slli) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_srli) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_srai)))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                     >> 0x14U))
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                     >> 0x14U)))
                                                 : 
                                                ((0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                           >> 7U))))
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                                >> 0x1fU))) 
                                                    << 0xdU) 
                                                   | ((0x1000U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                          >> 0x13U)) 
                                                      | ((0x800U 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                                  >> 7U))))))
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                                 >> 0x1fU))) 
                                                     << 0x15U) 
                                                    | ((0x100000U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                           >> 0xbU)) 
                                                       | ((0xff000U 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr) 
                                                          | ((0x800U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                                   >> 0x14U))))))
                                                    : 0U)))))))),32);
    bufp->fullCData(oldp+472,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_heebf2418__0) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_csrrw))
                                ? 0U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_h917f3f8b__0) 
                                         | (0x23U == 
                                            (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))
                                         ? 0U : (((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)) 
                                                  | ((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)) 
                                                     | (0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))))
                                                  ? 1U
                                                  : 2U)))),2);
    bufp->fullCData(oldp+473,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_heebf2418__0))
                                ? 0U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_TYPE) 
                                         | ((0x23U 
                                             == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)) 
                                            | ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_h5893b836__0))))
                                         ? 1U : 0U))),2);
    bufp->fullCData(oldp+474,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_hc3ee9fa0__0) 
                                 & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                           >> 0x19U))) 
                                | (IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))))
                                ? 0U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_hc3ee9fa0__0) 
                                         & (0x20U == 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                             >> 0x19U)))
                                         ? 1U : (((
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_h765e0868__0)) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_slli))
                                                  ? 2U
                                                  : 
                                                 (((IData)(
                                                           (0x2033U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))) 
                                                   | (IData)(
                                                             (0x2013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))))
                                                   ? 3U
                                                   : 
                                                  (((IData)(
                                                            (0x3033U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))) 
                                                    | (IData)(
                                                              (0x3013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))))
                                                    ? 4U
                                                    : 
                                                   (((IData)(
                                                             (0x4033U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))) 
                                                     | (IData)(
                                                               (0x4013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))))
                                                     ? 5U
                                                     : 
                                                    ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_hbbb9c7a8__0) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                           >> 0x19U))) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_srli))
                                                      ? 6U
                                                      : 
                                                     ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_hbbb9c7a8__0) 
                                                        & (0x20U 
                                                           == 
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                            >> 0x19U))) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_srai))
                                                       ? 7U
                                                       : 
                                                      (((IData)(
                                                                (0x6033U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))) 
                                                        | ((IData)(
                                                                   (0x6013U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))) 
                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_csrrs)))
                                                        ? 8U
                                                        : 
                                                       (((IData)(
                                                                 (0x7033U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))) 
                                                         | (IData)(
                                                                   (0x7013U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))))
                                                         ? 9U
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_hd32a5f52__0)
                                                          ? 0xbU
                                                          : 0U)))))))))))),4);
    bufp->fullCData(oldp+475,(((0xa023U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)
                                ? 8U : ((IData)((3U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))
                                         ? 0U : ((IData)(
                                                         (0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))
                                                  ? 1U
                                                  : 
                                                 ((IData)(
                                                          (0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))
                                                   ? 2U
                                                   : 
                                                  ((IData)(
                                                           (0x5003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0x23U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0x1023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0x2023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))
                                                        ? 7U
                                                        : 8U)))))))))),4);
    bufp->fullCData(oldp+476,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_heebf2418__0)
                                ? 0U : (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                 >> 7U)))),5);
    bufp->fullCData(oldp+477,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)) 
                                | ((0x13U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__opcode_U_TYPE)))
                                ? 0U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_hd32a5f52__0) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_csrrs))
                                         ? 0U : ((3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))
                                                  ? 1U
                                                  : 
                                                 (((0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)) 
                                                   | (0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))
                                                   ? 2U
                                                   : 1U))))),2);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_rs1),5);
    bufp->fullSData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_rs2),12);
    bufp->fullCData(oldp+480,(((0x73U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)
                                ? 0U : ((0x30200073U 
                                         == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)
                                         ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_csrrs)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_csrrw)
                                                   ? 3U
                                                   : 4U))))),3);
    bufp->fullSData(oldp+481,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+482,((0x73U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)));
    bufp->fullBit(oldp+483,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_h917f3f8b__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_h5893b836__0))));
    bufp->fullBit(oldp+484,((((IData)((0x63U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))) 
                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valA 
                                 == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valB)) 
                             | (((IData)((0x1063U == 
                                          (0x707fU 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valA 
                                    != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valB)) 
                                | (((IData)((0x4063U 
                                             == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))) 
                                    & VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valA, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valB)) 
                                   | (((IData)((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))) 
                                       & VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valA, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valB)) 
                                      | (((IData)((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))) 
                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valA 
                                             < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valB)) 
                                         | (((IData)(
                                                     (0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))) 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valA 
                                                >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valB)) 
                                            | ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)) 
                                               | ((0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)) 
                                                  | ((0x30200073U 
                                                      == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr) 
                                                     | (0x73U 
                                                        == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))))))))))));
    bufp->fullBit(oldp+485,((0x30200073U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)));
    bufp->fullBit(oldp+486,((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_valA),32);
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_valB),32);
    bufp->fullIData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_imm),32);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_alu_valA_sel),2);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_alu_valB_sel),2);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_alu_func_sel),4);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw),4);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_wb_rd),5);
    bufp->fullSData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_wb_csr_rd),12);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_wb_valD_sel),2);
    bufp->fullIData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_pc),32);
    bufp->fullIData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_instr),32);
    bufp->fullIData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_pre_pc),32);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_wb_csr_sel),3);
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_is_jalr));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_need_jump));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_wb_reg_wen));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_commit));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_is_ecall));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_is_mret));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_io_master_awready));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_io_master_wready));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_io_master_bvalid));
    bufp->fullIData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__execute_o_pre_pc),32);
    bufp->fullIData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__execute_o_valE),32);
    bufp->fullIData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_valE),32);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw),4);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_wb_rd),5);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_wb_valD_sel),2);
    bufp->fullIData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_instr),32);
    bufp->fullIData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_pc),32);
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_pre_pc),32);
    bufp->fullIData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_valB),32);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_wb_csr_sel),3);
    bufp->fullSData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_wb_csr_rd),12);
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_commit));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_wb_reg_wen));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_io_master_awready));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_io_master_wready));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_io_master_bvalid));
    bufp->fullIData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_o_valM),32);
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_o_io_master_wvalid));
    bufp->fullIData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_o_io_master_wdata),32);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_o_io_master_wstrb),4);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_o_io_master_awsize),3);
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_o_io_master_awvalid));
    bufp->fullIData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_o_io_master_awaddr),32);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_wb_rd),5);
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_wb_valD_sel),2);
    bufp->fullIData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_valE),32);
    bufp->fullIData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_instr),32);
    bufp->fullIData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_valM),32);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_wb_csr_sel),3);
    bufp->fullSData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_wb_csr_rd),12);
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_wb_reg_wen));
    bufp->fullIData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__write_back_o_wb_valD),32);
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_o_regF_stall));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_o_regE_bubble));
    bufp->fullCData(oldp+545,((0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_rs2))),5);
    bufp->fullBit(oldp+546,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+547,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+548,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+549,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+550,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+551,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw)) 
                             | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw)) 
                                | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw)) 
                                   | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw)) 
                                      | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))))))));
    bufp->fullBit(oldp+552,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+553,((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+554,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+555,(((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw)) 
                             | ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw)) 
                                | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))))));
    bufp->fullCData(oldp+556,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)),7);
    bufp->fullCData(oldp+557,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                        >> 7U))),5);
    bufp->fullCData(oldp+558,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+559,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+560,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+561,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+562,((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+563,((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+564,((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+565,((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+566,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+567,((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+568,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+569,((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+570,((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__opcode_U_TYPE));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_TYPE));
    bufp->fullBit(oldp+573,((0U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+574,((1U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+575,((2U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+576,((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+577,((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+578,((5U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+579,((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+580,((7U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+581,((0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+582,((0x20U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+583,((IData)((0x13U == (0x707fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_slli));
    bufp->fullBit(oldp+585,((IData)((0x2013U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+586,((IData)((0x3013U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+587,((IData)((0x4013U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_srli));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_srai));
    bufp->fullBit(oldp+590,((IData)((0x6013U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+591,((IData)((0x7013U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+592,((IData)((3U == (0x707fU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+593,((IData)((0x1003U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+594,((IData)((0x2003U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+595,((IData)((0x4003U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+596,((IData)((0x5003U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_csrrw));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_csrrs));
    bufp->fullBit(oldp+599,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_hc3ee9fa0__0) 
                             & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+600,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_hc3ee9fa0__0) 
                             & (0x20U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+601,(((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_h765e0868__0))));
    bufp->fullBit(oldp+602,((IData)((0x2033U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+603,((IData)((0x3033U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+604,((IData)((0x4033U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+605,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_hbbb9c7a8__0) 
                             & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+606,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_hbbb9c7a8__0) 
                             & (0x20U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+607,((IData)((0x6033U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+608,((IData)((0x7033U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+609,((IData)((0x63U == (0x707fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+610,((IData)((0x1063U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+611,((IData)((0x4063U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+612,((IData)((0x5063U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+613,((IData)((0x6063U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+614,((IData)((0x7063U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+615,((IData)((0x23U == (0x707fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+616,((IData)((0x1023U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+617,((IData)((0x2023U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullIData(oldp+618,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)),32);
    bufp->fullIData(oldp+619,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+620,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                        >> 0x14U))),32);
    bufp->fullIData(oldp+621,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+622,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+623,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                         >> 0x14U))))))),32);
    bufp->fullIData(oldp+624,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__regfile_i_rs1))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__regfile_i_rs1])),32);
    bufp->fullIData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__regfile_o_valB),32);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__regfile_i_rs1),5);
    bufp->fullSData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__regfile_i_rs2),12);
    bufp->fullIData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[0]),32);
    bufp->fullIData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[1]),32);
    bufp->fullIData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[2]),32);
    bufp->fullIData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[3]),32);
    bufp->fullIData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[4]),32);
    bufp->fullIData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[5]),32);
    bufp->fullIData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[6]),32);
    bufp->fullIData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[7]),32);
    bufp->fullIData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[8]),32);
    bufp->fullIData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[9]),32);
    bufp->fullIData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[10]),32);
    bufp->fullIData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[11]),32);
    bufp->fullIData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[12]),32);
    bufp->fullIData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[13]),32);
    bufp->fullIData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[14]),32);
    bufp->fullIData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[15]),32);
    bufp->fullIData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[16]),32);
    bufp->fullIData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[17]),32);
    bufp->fullIData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[18]),32);
    bufp->fullIData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[19]),32);
    bufp->fullIData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[20]),32);
    bufp->fullIData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[21]),32);
    bufp->fullIData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[22]),32);
    bufp->fullIData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[23]),32);
    bufp->fullIData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[24]),32);
    bufp->fullIData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[25]),32);
    bufp->fullIData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[26]),32);
    bufp->fullIData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[27]),32);
    bufp->fullIData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[28]),32);
    bufp->fullIData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[29]),32);
    bufp->fullIData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[30]),32);
    bufp->fullIData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[31]),32);
    bufp->fullIData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__mstatus),32);
    bufp->fullIData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__mtvec),32);
    bufp->fullIData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__mcause),32);
    bufp->fullIData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__mepc),32);
    bufp->fullIData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_execute__DOT__alu_valA),32);
    bufp->fullIData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_execute__DOT__alu_valB),32);
    bufp->fullBit(oldp+666,((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+667,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+668,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+669,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+670,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+671,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+672,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw)) 
                             | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw)) 
                                | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw)) 
                                   | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw)) 
                                      | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))))))));
    bufp->fullIData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_memory__DOT__read_mem_data),32);
    bufp->fullBit(oldp+674,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+675,((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+676,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+687,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+728,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+729,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+730,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+731,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+732,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+733,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+734,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+735,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+736,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+737,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullBit(oldp+738,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+739,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+741,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+742,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+743,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+744,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+745,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+746,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+747,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+748,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+749,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+750,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+751,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+752,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+753,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+754,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+755,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+756,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+757,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+758,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+759,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+760,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+761,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+762,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+763,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+764,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+765,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+766,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+767,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+768,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+769,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+770,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+771,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+772,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+776,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+777,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+778,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+779,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+783,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+785,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+790,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((9U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U))))))))),4);
    bufp->fullBit(oldp+791,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+794,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+795,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+800,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+804,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+806,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+837,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+838,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+839,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+840,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+841,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+842,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+843,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+847,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+849,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+850,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+852,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+856,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+857,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+859,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+877,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+878,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+879,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+880,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+881,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+882,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+883,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+886,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+887,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+888,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+907,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+914,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+933,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+934,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+935,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+936,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+937,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+956,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+957,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+958,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+959,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+960,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+962,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+981,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+998,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1009,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1010,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1017,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+1023,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullIData(oldp+1024,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1028,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+1039,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullIData(oldp+1040,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1046,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1047,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1048,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1049,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1050,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+1051,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1056,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1057,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1058,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1059,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1060,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),5);
    bufp->fullBit(oldp+1061,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullBit(oldp+1062,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+1063,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                  & (0xcU == (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                 << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (8U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                & (4U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                 & (0U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))))))),4);
    bufp->fullBit(oldp+1064,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1066,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1069,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1072,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1075,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1078,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullIData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1104,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1105,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1106,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1108,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1109,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1113,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1bU)) 
                                        | ((0xcU & 
                                            (8U ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x17U)) 
                                              | (1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0xcU)))))))));
    bufp->fullBit(oldp+1114,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1118,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x1bU)) 
                                     | ((0xcU & (8U 
                                                 ^ 
                                                 (0x3cU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1aU)))) 
                                        | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x17U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0xcU))))))));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullCData(oldp+1129,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                   | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1150,(vlSelf->clock));
    bufp->fullBit(oldp+1151,(vlSelf->reset));
    bufp->fullSData(oldp+1152,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1153,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1154,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1155,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1156,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1157,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1158,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1159,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1160,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1161,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1162,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1163,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1164,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1165,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1166,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1167,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1168,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1169,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1170,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1171,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1173,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1174,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1175,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1176,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1177,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1178,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1179,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullQData(oldp+1180,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                 << 0x23U) | (((QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                               << 3U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                    << 1U))))))),39);
    bufp->fullBit(oldp+1182,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rst__DOT__rst_n_r2) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_axi4_mem__DOT____VdfgTmp_h4ed8cdc5__0))));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rst__DOT__rst_n_r2));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rst__DOT__rst_n_r1));
    bufp->fullBit(oldp+1186,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1187,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1190,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1194,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1196,(1U),3);
    bufp->fullBit(oldp+1197,(0U));
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1207,(1U));
    bufp->fullCData(oldp+1208,(0U),4);
    bufp->fullCData(oldp+1209,(0U),8);
    bufp->fullCData(oldp+1210,(0U),2);
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullIData(oldp+1215,(0U),32);
    bufp->fullCData(oldp+1216,(0U),3);
    bufp->fullIData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr),32);
    bufp->fullSData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_i_wb_csr_rd),12);
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__execute_o_is_jalr));
    bufp->fullBit(oldp+1220,(0U));
    bufp->fullBit(oldp+1221,(1U));
    bufp->fullCData(oldp+1222,(4U),3);
    bufp->fullCData(oldp+1223,(0x1bU),8);
    bufp->fullCData(oldp+1224,(0xebU),8);
    bufp->fullCData(oldp+1225,(0x38U),8);
    bufp->fullIData(oldp+1226,(0x64U),32);
    bufp->fullIData(oldp+1227,(0x18U),32);
    bufp->fullIData(oldp+1228,(9U),32);
    bufp->fullIData(oldp+1229,(2U),32);
    bufp->fullIData(oldp+1230,(4U),32);
    bufp->fullIData(oldp+1231,(0xdU),32);
    bufp->fullIData(oldp+1232,(0x2000U),32);
    bufp->fullIData(oldp+1233,(0x2710U),32);
    bufp->fullIData(oldp+1234,(0x30cU),32);
    bufp->fullCData(oldp+1235,(7U),4);
    bufp->fullCData(oldp+1236,(3U),4);
    bufp->fullCData(oldp+1237,(5U),4);
    bufp->fullCData(oldp+1238,(4U),4);
    bufp->fullCData(oldp+1239,(6U),4);
    bufp->fullCData(oldp+1240,(2U),4);
    bufp->fullCData(oldp+1241,(1U),4);
    bufp->fullSData(oldp+1242,(0x21U),13);
    bufp->fullCData(oldp+1243,(8U),4);
    bufp->fullCData(oldp+1244,(9U),4);
    bufp->fullIData(oldp+1245,(0xaU),32);
    bufp->fullIData(oldp+1246,(0x10U),32);
    bufp->fullIData(oldp+1247,(6U),32);
    bufp->fullIData(oldp+1248,(0x11U),32);
    bufp->fullIData(oldp+1249,(0x30000000U),32);
    bufp->fullIData(oldp+1250,(0x3fffffffU),32);
    bufp->fullIData(oldp+1251,(8U),32);
    bufp->fullIData(oldp+1252,(1U),32);
    bufp->fullCData(oldp+1253,(0xaU),4);
    bufp->fullIData(oldp+1254,(0xbU),32);
    bufp->fullIData(oldp+1255,(5U),32);
    bufp->fullCData(oldp+1256,(2U),3);
    bufp->fullCData(oldp+1257,(3U),3);
    bufp->fullCData(oldp+1258,(5U),3);
}
