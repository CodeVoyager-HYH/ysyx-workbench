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
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBus(c+1156,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1157,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1158,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1159,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1160,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1161,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1162,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1163,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1164,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1165,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1166,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1167,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1168,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1169,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1170,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1171,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1172,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1173,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1174,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1175,"externalPins_uart_tx", false,-1);
    tracep->declBus(c+1176,"cur_pc", false,-1, 31,0);
    tracep->declBit(c+1177,"commit", false,-1);
    tracep->declBus(c+1178,"commit_pc", false,-1, 31,0);
    tracep->declBus(c+1179,"commit_pre_pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBus(c+1156,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1157,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1158,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1159,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1160,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1161,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1162,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1163,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1164,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1165,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1166,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1167,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1168,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1169,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1170,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1171,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1172,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1173,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1174,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1175,"externalPins_uart_tx", false,-1);
    tracep->declBus(c+1176,"cur_pc", false,-1, 31,0);
    tracep->declBit(c+1177,"commit", false,-1);
    tracep->declBus(c+1178,"commit_pc", false,-1, 31,0);
    tracep->declBus(c+1179,"commit_pre_pc", false,-1, 31,0);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+812,"spi_sck", false,-1);
    tracep->declBus(c+813,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1180,"spi_mosi", false,-1);
    tracep->declBit(c+1181,"spi_miso", false,-1);
    tracep->declBit(c+1174,"uart_rx", false,-1);
    tracep->declBit(c+1175,"uart_tx", false,-1);
    tracep->declBit(c+1182,"psram_sck", false,-1);
    tracep->declBit(c+1183,"psram_ce_n", false,-1);
    tracep->declBus(c+1133,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1184,"sdram_clk", false,-1);
    tracep->declBit(c+814,"sdram_cke", false,-1);
    tracep->declBit(c+815,"sdram_cs", false,-1);
    tracep->declBit(c+816,"sdram_ras", false,-1);
    tracep->declBit(c+817,"sdram_cas", false,-1);
    tracep->declBit(c+818,"sdram_we", false,-1);
    tracep->declBus(c+819,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+820,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+821,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+822,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1156,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1157,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1158,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1159,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1160,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1161,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1162,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1163,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1164,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1165,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1166,"ps2_clk", false,-1);
    tracep->declBit(c+1167,"ps2_data", false,-1);
    tracep->declBus(c+1168,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1169,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1170,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1171,"vga_hsync", false,-1);
    tracep->declBit(c+1172,"vga_vsync", false,-1);
    tracep->declBit(c+1173,"vga_valid", false,-1);
    tracep->declBus(c+1176,"cur_pc", false,-1, 31,0);
    tracep->declBit(c+1177,"commit", false,-1);
    tracep->declBus(c+1178,"commit_pc", false,-1, 31,0);
    tracep->declBus(c+1179,"commit_pre_pc", false,-1, 31,0);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBus(c+1057,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+8,"in_psel", false,-1);
    tracep->declBit(c+9,"in_penable", false,-1);
    tracep->declBus(c+1204,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1058,"in_pwrite", false,-1);
    tracep->declBus(c+1059,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1134,"in_pready", false,-1);
    tracep->declBus(c+1135,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1061,"in_pslverr", false,-1);
    tracep->declBus(c+1057,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+8,"out_psel", false,-1);
    tracep->declBit(c+9,"out_penable", false,-1);
    tracep->declBus(c+1204,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1058,"out_pwrite", false,-1);
    tracep->declBus(c+1059,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1134,"out_pready", false,-1);
    tracep->declBus(c+1135,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1061,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+8,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+9,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1058,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1057,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1204,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1059,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1134,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1061,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1135,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+734,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+735,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1058,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1057,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1204,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1059,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+823,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1205,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+824,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+736,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+737,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1058,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1062,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1204,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1059,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1206,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1207,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1208,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+738,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+739,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1058,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1063,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1204,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1059,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1209,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1210,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1211,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+740,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+741,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1058,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1063,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1204,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1059,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1212,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1213,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1214,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1064,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+742,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1058,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1057,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1204,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1059,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1185,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1205,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+10,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1065,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1066,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1058,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1063,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1204,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1059,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1067,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1205,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1186,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1068,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1069,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1058,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1062,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1204,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1059,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+825,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1205,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+826,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1070,"sel_0", false,-1);
    tracep->declBit(c+1071,"sel_1", false,-1);
    tracep->declBit(c+1072,"sel_2", false,-1);
    tracep->declBit(c+1073,"sel_3", false,-1);
    tracep->declBit(c+1074,"sel_4", false,-1);
    tracep->declBit(c+1075,"sel_5", false,-1);
    tracep->declBit(c+1076,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
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
    tracep->declBit(c+1136,"auto_in_bvalid", false,-1);
    tracep->declBus(c+21,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1077,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+22,"auto_in_arready", false,-1);
    tracep->declBit(c+23,"auto_in_arvalid", false,-1);
    tracep->declBus(c+24,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+27,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+28,"auto_in_rready", false,-1);
    tracep->declBit(c+1137,"auto_in_rvalid", false,-1);
    tracep->declBus(c+29,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1187,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1077,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+8,"auto_out_psel", false,-1);
    tracep->declBit(c+9,"auto_out_penable", false,-1);
    tracep->declBit(c+1058,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1057,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1059,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1134,"auto_out_pready", false,-1);
    tracep->declBit(c+1061,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1135,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+9,"nodeOut_penable", false,-1);
    tracep->declBus(c+30,"state", false,-1, 1,0);
    tracep->declBit(c+22,"accept_read", false,-1);
    tracep->declBit(c+11,"accept_write", false,-1);
    tracep->declBit(c+31,"is_write_r", false,-1);
    tracep->declBit(c+1058,"is_write", false,-1);
    tracep->declBus(c+29,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+21,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+32,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+33,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+34,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+35,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1078,"resp", false,-1, 1,0);
    tracep->declBus(c+36,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1077,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1137,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+37,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1136,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+38,"auto_in_awready", false,-1);
    tracep->declBit(c+39,"auto_in_awvalid", false,-1);
    tracep->declBus(c+40,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+41,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+42,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_in_wready", false,-1);
    tracep->declBit(c+45,"auto_in_wvalid", false,-1);
    tracep->declBus(c+46,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+47,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+48,"auto_in_wlast", false,-1);
    tracep->declBit(c+744,"auto_in_bready", false,-1);
    tracep->declBit(c+49,"auto_in_bvalid", false,-1);
    tracep->declBus(c+50,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_in_arready", false,-1);
    tracep->declBit(c+53,"auto_in_arvalid", false,-1);
    tracep->declBus(c+54,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+56,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+745,"auto_in_rready", false,-1);
    tracep->declBit(c+58,"auto_in_rvalid", false,-1);
    tracep->declBus(c+59,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+60,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+61,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+62,"auto_in_rlast", false,-1);
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
    tracep->declBit(c+1136,"auto_out_bvalid", false,-1);
    tracep->declBus(c+21,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1077,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+22,"auto_out_arready", false,-1);
    tracep->declBit(c+23,"auto_out_arvalid", false,-1);
    tracep->declBus(c+24,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+27,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+28,"auto_out_rready", false,-1);
    tracep->declBit(c+1137,"auto_out_rvalid", false,-1);
    tracep->declBus(c+29,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1187,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1077,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+20,"io_enq_ready", false,-1);
    tracep->declBit(c+1136,"io_enq_valid", false,-1);
    tracep->declBus(c+21,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1077,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+744,"io_deq_ready", false,-1);
    tracep->declBit(c+49,"io_deq_valid", false,-1);
    tracep->declBus(c+50,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+51,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+63,"wrap", false,-1);
    tracep->declBit(c+64,"wrap_1", false,-1);
    tracep->declBit(c+65,"maybe_full", false,-1);
    tracep->declBit(c+66,"ptr_match", false,-1);
    tracep->declBit(c+67,"empty", false,-1);
    tracep->declBit(c+68,"full", false,-1);
    tracep->declBit(c+1138,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+64,"R0_addr", false,-1);
    tracep->declBit(c+1215,"R0_en", false,-1);
    tracep->declBit(c+1154,"R0_clk", false,-1);
    tracep->declBus(c+69,"R0_data", false,-1, 5,0);
    tracep->declBit(c+63,"W0_addr", false,-1);
    tracep->declBit(c+1138,"W0_en", false,-1);
    tracep->declBit(c+1154,"W0_clk", false,-1);
    tracep->declBus(c+743,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+70+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+72,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+28,"io_enq_ready", false,-1);
    tracep->declBit(c+1137,"io_enq_valid", false,-1);
    tracep->declBus(c+29,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1187,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1077,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+745,"io_deq_ready", false,-1);
    tracep->declBit(c+58,"io_deq_valid", false,-1);
    tracep->declBus(c+59,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+60,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+61,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+62,"io_deq_bits_last", false,-1);
    tracep->declBit(c+73,"wrap", false,-1);
    tracep->declBit(c+74,"wrap_1", false,-1);
    tracep->declBit(c+75,"maybe_full", false,-1);
    tracep->declBit(c+76,"ptr_match", false,-1);
    tracep->declBit(c+77,"empty", false,-1);
    tracep->declBit(c+78,"full", false,-1);
    tracep->declBit(c+1139,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+74,"R0_addr", false,-1);
    tracep->declBit(c+1215,"R0_en", false,-1);
    tracep->declBit(c+1154,"R0_clk", false,-1);
    tracep->declQuad(c+79,"R0_data", false,-1, 38,0);
    tracep->declBit(c+73,"W0_addr", false,-1);
    tracep->declBit(c+1139,"W0_en", false,-1);
    tracep->declBit(c+1154,"W0_clk", false,-1);
    tracep->declQuad(c+1188,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+81+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+85,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+52,"io_enq_ready", false,-1);
    tracep->declBit(c+53,"io_enq_valid", false,-1);
    tracep->declBus(c+54,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+55,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+56,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+57,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+22,"io_deq_ready", false,-1);
    tracep->declBit(c+23,"io_deq_valid", false,-1);
    tracep->declBus(c+24,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+25,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+26,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+27,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+86,"wrap", false,-1);
    tracep->declBit(c+87,"wrap_1", false,-1);
    tracep->declBit(c+88,"maybe_full", false,-1);
    tracep->declBit(c+89,"ptr_match", false,-1);
    tracep->declBit(c+90,"empty", false,-1);
    tracep->declBit(c+91,"full", false,-1);
    tracep->declBit(c+92,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+87,"R0_addr", false,-1);
    tracep->declBit(c+1215,"R0_en", false,-1);
    tracep->declBit(c+1154,"R0_clk", false,-1);
    tracep->declQuad(c+93,"R0_data", false,-1, 46,0);
    tracep->declBit(c+86,"W0_addr", false,-1);
    tracep->declBit(c+92,"W0_en", false,-1);
    tracep->declBit(c+1154,"W0_clk", false,-1);
    tracep->declQuad(c+95,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+97+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+101,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+38,"io_enq_ready", false,-1);
    tracep->declBit(c+39,"io_enq_valid", false,-1);
    tracep->declBus(c+40,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+41,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+42,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+43,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+12,"io_deq_valid", false,-1);
    tracep->declBus(c+13,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+14,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+15,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+16,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+102,"wrap", false,-1);
    tracep->declBit(c+103,"wrap_1", false,-1);
    tracep->declBit(c+104,"maybe_full", false,-1);
    tracep->declBit(c+105,"ptr_match", false,-1);
    tracep->declBit(c+106,"empty", false,-1);
    tracep->declBit(c+107,"full", false,-1);
    tracep->declBit(c+108,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+103,"R0_addr", false,-1);
    tracep->declBit(c+1215,"R0_en", false,-1);
    tracep->declBit(c+1154,"R0_clk", false,-1);
    tracep->declQuad(c+109,"R0_data", false,-1, 46,0);
    tracep->declBit(c+102,"W0_addr", false,-1);
    tracep->declBit(c+108,"W0_en", false,-1);
    tracep->declBit(c+1154,"W0_clk", false,-1);
    tracep->declQuad(c+111,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+113+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+117,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+44,"io_enq_ready", false,-1);
    tracep->declBit(c+45,"io_enq_valid", false,-1);
    tracep->declBus(c+46,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+47,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+48,"io_enq_bits_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+17,"io_deq_valid", false,-1);
    tracep->declBus(c+18,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+19,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+118,"wrap", false,-1);
    tracep->declBit(c+119,"wrap_1", false,-1);
    tracep->declBit(c+120,"maybe_full", false,-1);
    tracep->declBit(c+121,"ptr_match", false,-1);
    tracep->declBit(c+122,"empty", false,-1);
    tracep->declBit(c+123,"full", false,-1);
    tracep->declBit(c+124,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+119,"R0_addr", false,-1);
    tracep->declBit(c+1215,"R0_en", false,-1);
    tracep->declBit(c+1154,"R0_clk", false,-1);
    tracep->declQuad(c+125,"R0_data", false,-1, 35,0);
    tracep->declBit(c+118,"W0_addr", false,-1);
    tracep->declBit(c+124,"W0_en", false,-1);
    tracep->declBit(c+1154,"W0_clk", false,-1);
    tracep->declQuad(c+127,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+129+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+133,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+134,"auto_in_awready", false,-1);
    tracep->declBit(c+135,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1216,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+137,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1218,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+138,"auto_in_wready", false,-1);
    tracep->declBit(c+139,"auto_in_wvalid", false,-1);
    tracep->declBus(c+140,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+141,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1215,"auto_in_wlast", false,-1);
    tracep->declBit(c+1190,"auto_in_bready", false,-1);
    tracep->declBit(c+142,"auto_in_bvalid", false,-1);
    tracep->declBus(c+143,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+144,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+145,"auto_in_arready", false,-1);
    tracep->declBit(c+146,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1216,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+147,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+148,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1218,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1108,"auto_in_rready", false,-1);
    tracep->declBit(c+149,"auto_in_rvalid", false,-1);
    tracep->declBus(c+150,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+152,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+153,"auto_in_rlast", false,-1);
    tracep->declBit(c+1109,"auto_out_awready", false,-1);
    tracep->declBit(c+154,"auto_out_awvalid", false,-1);
    tracep->declBus(c+40,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+41,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+42,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+155,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1110,"auto_out_wready", false,-1);
    tracep->declBit(c+156,"auto_out_wvalid", false,-1);
    tracep->declBus(c+46,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+47,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+48,"auto_out_wlast", false,-1);
    tracep->declBit(c+1111,"auto_out_bready", false,-1);
    tracep->declBit(c+157,"auto_out_bvalid", false,-1);
    tracep->declBus(c+143,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+158,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+159,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1112,"auto_out_arready", false,-1);
    tracep->declBit(c+160,"auto_out_arvalid", false,-1);
    tracep->declBus(c+54,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+56,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+161,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1108,"auto_out_rready", false,-1);
    tracep->declBit(c+149,"auto_out_rvalid", false,-1);
    tracep->declBus(c+150,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+152,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+162,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+163,"auto_out_rlast", false,-1);
    tracep->declBit(c+156,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+164,"w_idle", false,-1);
    tracep->declBit(c+1113,"in_awready", false,-1);
    tracep->declBit(c+165,"busy", false,-1);
    tracep->declBus(c+166,"r_addr", false,-1, 31,0);
    tracep->declBus(c+167,"r_len", false,-1, 7,0);
    tracep->declBus(c+168,"len", false,-1, 7,0);
    tracep->declBus(c+169,"addr", false,-1, 31,0);
    tracep->declBit(c+170,"busy_1", false,-1);
    tracep->declBus(c+171,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+172,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+173,"len_1", false,-1, 7,0);
    tracep->declBus(c+174,"addr_1", false,-1, 31,0);
    tracep->declBit(c+175,"wbeats_latched", false,-1);
    tracep->declBit(c+154,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+176,"wbeats_valid", false,-1);
    tracep->declBus(c+177,"w_counter", false,-1, 8,0);
    tracep->declBus(c+178,"w_todo", false,-1, 8,0);
    tracep->declBit(c+48,"w_last", false,-1);
    tracep->declBit(c+1111,"nodeOut_bready", false,-1);
    tracep->declBus(c+179,"error_0", false,-1, 1,0);
    tracep->declBus(c+180,"error_1", false,-1, 1,0);
    tracep->declBus(c+181,"error_2", false,-1, 1,0);
    tracep->declBus(c+182,"error_3", false,-1, 1,0);
    tracep->declBus(c+183,"error_4", false,-1, 1,0);
    tracep->declBus(c+184,"error_5", false,-1, 1,0);
    tracep->declBus(c+185,"error_6", false,-1, 1,0);
    tracep->declBus(c+186,"error_7", false,-1, 1,0);
    tracep->declBus(c+187,"error_8", false,-1, 1,0);
    tracep->declBus(c+188,"error_9", false,-1, 1,0);
    tracep->declBus(c+189,"error_10", false,-1, 1,0);
    tracep->declBus(c+190,"error_11", false,-1, 1,0);
    tracep->declBus(c+191,"error_12", false,-1, 1,0);
    tracep->declBus(c+192,"error_13", false,-1, 1,0);
    tracep->declBus(c+193,"error_14", false,-1, 1,0);
    tracep->declBus(c+194,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+145,"io_enq_ready", false,-1);
    tracep->declBit(c+146,"io_enq_valid", false,-1);
    tracep->declBus(c+1216,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+147,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1217,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+148,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1218,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1114,"io_deq_ready", false,-1);
    tracep->declBit(c+160,"io_deq_valid", false,-1);
    tracep->declBus(c+54,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+195,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+196,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+56,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+57,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+197,"ram", false,-1, 48,0);
    tracep->declBit(c+199,"full", false,-1);
    tracep->declBit(c+160,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1115,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+134,"io_enq_ready", false,-1);
    tracep->declBit(c+135,"io_enq_valid", false,-1);
    tracep->declBus(c+1216,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+136,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1217,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+137,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1218,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1116,"io_deq_ready", false,-1);
    tracep->declBit(c+200,"io_deq_valid", false,-1);
    tracep->declBus(c+40,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+201,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+202,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+42,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+43,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+203,"ram", false,-1, 48,0);
    tracep->declBit(c+205,"full", false,-1);
    tracep->declBit(c+200,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1117,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+138,"io_enq_ready", false,-1);
    tracep->declBit(c+139,"io_enq_valid", false,-1);
    tracep->declBus(c+140,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+141,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1215,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1118,"io_deq_ready", false,-1);
    tracep->declBit(c+206,"io_deq_valid", false,-1);
    tracep->declBus(c+46,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+47,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+207,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+208,"ram", false,-1, 36,0);
    tracep->declBit(c+210,"full", false,-1);
    tracep->declBit(c+206,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1119,"do_enq", false,-1);
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
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+1120,"auto_in_awready", false,-1);
    tracep->declBit(c+211,"auto_in_awvalid", false,-1);
    tracep->declBus(c+40,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+212,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+746,"auto_in_wready", false,-1);
    tracep->declBit(c+213,"auto_in_wvalid", false,-1);
    tracep->declBus(c+46,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+47,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1121,"auto_in_bready", false,-1);
    tracep->declBit(c+214,"auto_in_bvalid", false,-1);
    tracep->declBus(c+215,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+216,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1122,"auto_in_arready", false,-1);
    tracep->declBit(c+217,"auto_in_arvalid", false,-1);
    tracep->declBus(c+54,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+218,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1123,"auto_in_rready", false,-1);
    tracep->declBit(c+219,"auto_in_rvalid", false,-1);
    tracep->declBus(c+220,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+221,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+222,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1122,"nodeIn_arready", false,-1);
    tracep->declBit(c+1120,"nodeIn_awready", false,-1);
    tracep->declBit(c+223,"w_sel0", false,-1);
    tracep->declBit(c+214,"w_full", false,-1);
    tracep->declBus(c+215,"w_id", false,-1, 3,0);
    tracep->declBit(c+224,"r_sel1", false,-1);
    tracep->declBit(c+225,"w_sel1", false,-1);
    tracep->declBit(c+219,"r_full", false,-1);
    tracep->declBus(c+220,"r_id", false,-1, 3,0);
    tracep->declBit(c+1124,"ren", false,-1);
    tracep->declBit(c+226,"rdata_REG", false,-1);
    tracep->declBus(c+227,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+228,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+229,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+230,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+231,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1124,"R0_en", false,-1);
    tracep->declBit(c+1154,"R0_clk", false,-1);
    tracep->declBus(c+232,"R0_data", false,-1, 31,0);
    tracep->declBus(c+233,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1125,"W0_en", false,-1);
    tracep->declBit(c+1154,"W0_clk", false,-1);
    tracep->declBus(c+46,"W0_data", false,-1, 31,0);
    tracep->declBus(c+47,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+134,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+135,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1216,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+137,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1218,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+138,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+139,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+140,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+141,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1215,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1190,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+142,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+143,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+144,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+145,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+146,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1216,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+147,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+148,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1218,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1108,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+149,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+150,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+152,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+153,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+134,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+135,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1216,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+137,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1218,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+138,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+139,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+140,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+141,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1215,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+1190,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+142,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+143,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+144,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+145,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+146,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1216,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+147,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+148,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1218,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1108,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+149,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+150,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+152,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+153,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+1126,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+234,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+40,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+41,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+42,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1110,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+156,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+46,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+47,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+48,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1111,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+157,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+143,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+158,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1127,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+235,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+54,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+56,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1108,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+149,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+150,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+152,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+163,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1120,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+211,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+40,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+212,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+746,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+213,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+46,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+47,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1121,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+214,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+215,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+216,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1122,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+217,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+54,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+218,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1123,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+219,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+220,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+221,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+222,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+236,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+237,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+238,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+239,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+54,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+240,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+747,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+241,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+242,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+243,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+38,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+39,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+40,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+41,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+42,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+44,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+45,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+46,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+47,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+48,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+744,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+49,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+50,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+53,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+54,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+56,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+745,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+58,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+59,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+60,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+61,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+62,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+157,"in_0_bvalid", false,-1);
    tracep->declBit(c+149,"in_0_rvalid", false,-1);
    tracep->declBit(c+1128,"in_0_wready", false,-1);
    tracep->declBit(c+1129,"in_0_awready", false,-1);
    tracep->declBit(c+1127,"in_0_arready", false,-1);
    tracep->declBit(c+1126,"anonIn_awready", false,-1);
    tracep->declBit(c+244,"requestARIO_0_0", false,-1);
    tracep->declBit(c+245,"requestARIO_0_1", false,-1);
    tracep->declBit(c+246,"requestARIO_0_2", false,-1);
    tracep->declBit(c+247,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+248,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+249,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+250,"arSel", false,-1, 15,0);
    tracep->declBus(c+251,"awSel", false,-1, 15,0);
    tracep->declBus(c+252,"rSel", false,-1, 15,0);
    tracep->declBus(c+253,"bSel", false,-1, 15,0);
    tracep->declBit(c+254,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+255,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+256,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+257,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+258,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+259,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+260,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+261,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+262,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+263,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+264,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+265,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+266,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+267,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+268,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+269,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+270,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+271,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+272,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+273,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+274,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+275,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+276,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+277,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+278,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+279,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+280,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+281,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+282,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+283,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+284,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+285,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+286,"latched", false,-1);
    tracep->declBit(c+287,"in_0_awvalid", false,-1);
    tracep->declBit(c+288,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+289,"in_0_wvalid", false,-1);
    tracep->declBit(c+290,"idle_3", false,-1);
    tracep->declBit(c+291,"anyValid", false,-1);
    tracep->declBus(c+292,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+293,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+294,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+295,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+296,"prefixOR_1", false,-1);
    tracep->declBit(c+297,"winner_3_1", false,-1);
    tracep->declBit(c+298,"winner_3_2", false,-1);
    tracep->declBit(c+299,"state_3_0", false,-1);
    tracep->declBit(c+300,"state_3_1", false,-1);
    tracep->declBit(c+301,"state_3_2", false,-1);
    tracep->declBit(c+302,"muxState_3_0", false,-1);
    tracep->declBit(c+303,"muxState_3_1", false,-1);
    tracep->declBit(c+304,"muxState_3_2", false,-1);
    tracep->declBit(c+305,"idle_4", false,-1);
    tracep->declBit(c+306,"anyValid_1", false,-1);
    tracep->declBus(c+307,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+308,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+309,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+310,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+311,"winner_4_0", false,-1);
    tracep->declBit(c+312,"winner_4_2", false,-1);
    tracep->declBit(c+313,"state_4_0", false,-1);
    tracep->declBit(c+314,"state_4_2", false,-1);
    tracep->declBit(c+315,"muxState_4_0", false,-1);
    tracep->declBit(c+316,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+288,"io_enq_valid", false,-1);
    tracep->declBus(c+318,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1130,"io_deq_ready", false,-1);
    tracep->declBit(c+319,"io_deq_valid", false,-1);
    tracep->declBus(c+320,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+321,"wrap", false,-1);
    tracep->declBit(c+322,"wrap_1", false,-1);
    tracep->declBit(c+323,"maybe_full", false,-1);
    tracep->declBit(c+324,"ptr_match", false,-1);
    tracep->declBit(c+325,"empty", false,-1);
    tracep->declBit(c+326,"full", false,-1);
    tracep->declBit(c+319,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1131,"do_deq", false,-1);
    tracep->declBit(c+1132,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+322,"R0_addr", false,-1);
    tracep->declBit(c+1215,"R0_en", false,-1);
    tracep->declBit(c+1154,"R0_clk", false,-1);
    tracep->declBus(c+327,"R0_data", false,-1, 2,0);
    tracep->declBit(c+321,"W0_addr", false,-1);
    tracep->declBit(c+1132,"W0_en", false,-1);
    tracep->declBit(c+1154,"W0_clk", false,-1);
    tracep->declBus(c+318,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+328+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+1109,"auto_in_awready", false,-1);
    tracep->declBit(c+154,"auto_in_awvalid", false,-1);
    tracep->declBus(c+40,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+41,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+42,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+155,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1110,"auto_in_wready", false,-1);
    tracep->declBit(c+156,"auto_in_wvalid", false,-1);
    tracep->declBus(c+46,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+47,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+48,"auto_in_wlast", false,-1);
    tracep->declBit(c+1111,"auto_in_bready", false,-1);
    tracep->declBit(c+157,"auto_in_bvalid", false,-1);
    tracep->declBus(c+143,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+158,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+159,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1112,"auto_in_arready", false,-1);
    tracep->declBit(c+160,"auto_in_arvalid", false,-1);
    tracep->declBus(c+54,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+56,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+161,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1108,"auto_in_rready", false,-1);
    tracep->declBit(c+149,"auto_in_rvalid", false,-1);
    tracep->declBus(c+150,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+152,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+162,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+163,"auto_in_rlast", false,-1);
    tracep->declBit(c+1126,"auto_out_awready", false,-1);
    tracep->declBit(c+234,"auto_out_awvalid", false,-1);
    tracep->declBus(c+40,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+41,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+42,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+43,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1110,"auto_out_wready", false,-1);
    tracep->declBit(c+156,"auto_out_wvalid", false,-1);
    tracep->declBus(c+46,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+47,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+48,"auto_out_wlast", false,-1);
    tracep->declBit(c+1111,"auto_out_bready", false,-1);
    tracep->declBit(c+157,"auto_out_bvalid", false,-1);
    tracep->declBus(c+143,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+158,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1127,"auto_out_arready", false,-1);
    tracep->declBit(c+235,"auto_out_arvalid", false,-1);
    tracep->declBus(c+54,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+56,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+57,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1108,"auto_out_rready", false,-1);
    tracep->declBit(c+149,"auto_out_rvalid", false,-1);
    tracep->declBus(c+150,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+152,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+163,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+330,"io_enq_ready", false,-1);
    tracep->declBit(c+748,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+749,"io_deq_ready", false,-1);
    tracep->declBit(c+331,"io_deq_valid", false,-1);
    tracep->declBit(c+332,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+331,"full", false,-1);
    tracep->declBit(c+332,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+333,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+334,"io_enq_ready", false,-1);
    tracep->declBit(c+750,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+751,"io_deq_ready", false,-1);
    tracep->declBit(c+335,"io_deq_valid", false,-1);
    tracep->declBit(c+336,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+335,"full", false,-1);
    tracep->declBit(c+336,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+337,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+338,"io_enq_ready", false,-1);
    tracep->declBit(c+752,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+753,"io_deq_ready", false,-1);
    tracep->declBit(c+339,"io_deq_valid", false,-1);
    tracep->declBit(c+340,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+339,"full", false,-1);
    tracep->declBit(c+340,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+341,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+342,"io_enq_ready", false,-1);
    tracep->declBit(c+754,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+755,"io_deq_ready", false,-1);
    tracep->declBit(c+343,"io_deq_valid", false,-1);
    tracep->declBit(c+344,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+343,"full", false,-1);
    tracep->declBit(c+344,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+345,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+346,"io_enq_ready", false,-1);
    tracep->declBit(c+756,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+757,"io_deq_ready", false,-1);
    tracep->declBit(c+347,"io_deq_valid", false,-1);
    tracep->declBit(c+348,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+347,"full", false,-1);
    tracep->declBit(c+348,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+349,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+350,"io_enq_ready", false,-1);
    tracep->declBit(c+758,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+759,"io_deq_ready", false,-1);
    tracep->declBit(c+351,"io_deq_valid", false,-1);
    tracep->declBit(c+352,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+351,"full", false,-1);
    tracep->declBit(c+352,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+353,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+354,"io_enq_ready", false,-1);
    tracep->declBit(c+760,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+761,"io_deq_ready", false,-1);
    tracep->declBit(c+355,"io_deq_valid", false,-1);
    tracep->declBit(c+356,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+355,"full", false,-1);
    tracep->declBit(c+356,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+357,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+358,"io_enq_ready", false,-1);
    tracep->declBit(c+762,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+763,"io_deq_ready", false,-1);
    tracep->declBit(c+359,"io_deq_valid", false,-1);
    tracep->declBit(c+360,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+359,"full", false,-1);
    tracep->declBit(c+360,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+361,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+362,"io_enq_ready", false,-1);
    tracep->declBit(c+764,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+765,"io_deq_ready", false,-1);
    tracep->declBit(c+363,"io_deq_valid", false,-1);
    tracep->declBit(c+364,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+363,"full", false,-1);
    tracep->declBit(c+364,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+365,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+366,"io_enq_ready", false,-1);
    tracep->declBit(c+766,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+767,"io_deq_ready", false,-1);
    tracep->declBit(c+367,"io_deq_valid", false,-1);
    tracep->declBit(c+368,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+367,"full", false,-1);
    tracep->declBit(c+368,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+369,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+370,"io_enq_ready", false,-1);
    tracep->declBit(c+768,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+769,"io_deq_ready", false,-1);
    tracep->declBit(c+371,"io_deq_valid", false,-1);
    tracep->declBit(c+372,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+371,"full", false,-1);
    tracep->declBit(c+372,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+373,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+374,"io_enq_ready", false,-1);
    tracep->declBit(c+770,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+771,"io_deq_ready", false,-1);
    tracep->declBit(c+375,"io_deq_valid", false,-1);
    tracep->declBit(c+376,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+375,"full", false,-1);
    tracep->declBit(c+376,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+377,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+378,"io_enq_ready", false,-1);
    tracep->declBit(c+772,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+773,"io_deq_ready", false,-1);
    tracep->declBit(c+379,"io_deq_valid", false,-1);
    tracep->declBit(c+380,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+379,"full", false,-1);
    tracep->declBit(c+380,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+381,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+382,"io_enq_ready", false,-1);
    tracep->declBit(c+774,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+775,"io_deq_ready", false,-1);
    tracep->declBit(c+383,"io_deq_valid", false,-1);
    tracep->declBit(c+384,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+383,"full", false,-1);
    tracep->declBit(c+384,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+385,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+386,"io_enq_ready", false,-1);
    tracep->declBit(c+776,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+777,"io_deq_ready", false,-1);
    tracep->declBit(c+387,"io_deq_valid", false,-1);
    tracep->declBit(c+388,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+387,"full", false,-1);
    tracep->declBit(c+388,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+389,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+390,"io_enq_ready", false,-1);
    tracep->declBit(c+778,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+779,"io_deq_ready", false,-1);
    tracep->declBit(c+391,"io_deq_valid", false,-1);
    tracep->declBit(c+392,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+391,"full", false,-1);
    tracep->declBit(c+392,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+393,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+394,"io_enq_ready", false,-1);
    tracep->declBit(c+780,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+781,"io_deq_ready", false,-1);
    tracep->declBit(c+395,"io_deq_valid", false,-1);
    tracep->declBit(c+396,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+395,"full", false,-1);
    tracep->declBit(c+396,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+397,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+398,"io_enq_ready", false,-1);
    tracep->declBit(c+782,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+783,"io_deq_ready", false,-1);
    tracep->declBit(c+399,"io_deq_valid", false,-1);
    tracep->declBit(c+400,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+399,"full", false,-1);
    tracep->declBit(c+400,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+401,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+402,"io_enq_ready", false,-1);
    tracep->declBit(c+784,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+785,"io_deq_ready", false,-1);
    tracep->declBit(c+403,"io_deq_valid", false,-1);
    tracep->declBit(c+404,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+403,"full", false,-1);
    tracep->declBit(c+404,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+405,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+406,"io_enq_ready", false,-1);
    tracep->declBit(c+786,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+787,"io_deq_ready", false,-1);
    tracep->declBit(c+407,"io_deq_valid", false,-1);
    tracep->declBit(c+408,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+407,"full", false,-1);
    tracep->declBit(c+408,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+409,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+410,"io_enq_ready", false,-1);
    tracep->declBit(c+788,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+789,"io_deq_ready", false,-1);
    tracep->declBit(c+411,"io_deq_valid", false,-1);
    tracep->declBit(c+412,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+411,"full", false,-1);
    tracep->declBit(c+412,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+413,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+414,"io_enq_ready", false,-1);
    tracep->declBit(c+790,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+791,"io_deq_ready", false,-1);
    tracep->declBit(c+415,"io_deq_valid", false,-1);
    tracep->declBit(c+416,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+415,"full", false,-1);
    tracep->declBit(c+416,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+417,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+418,"io_enq_ready", false,-1);
    tracep->declBit(c+792,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+793,"io_deq_ready", false,-1);
    tracep->declBit(c+419,"io_deq_valid", false,-1);
    tracep->declBit(c+420,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+419,"full", false,-1);
    tracep->declBit(c+420,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+421,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+422,"io_enq_ready", false,-1);
    tracep->declBit(c+794,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+795,"io_deq_ready", false,-1);
    tracep->declBit(c+423,"io_deq_valid", false,-1);
    tracep->declBit(c+424,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+423,"full", false,-1);
    tracep->declBit(c+424,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+425,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+426,"io_enq_ready", false,-1);
    tracep->declBit(c+796,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+797,"io_deq_ready", false,-1);
    tracep->declBit(c+427,"io_deq_valid", false,-1);
    tracep->declBit(c+428,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+427,"full", false,-1);
    tracep->declBit(c+428,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+429,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+430,"io_enq_ready", false,-1);
    tracep->declBit(c+798,"io_enq_valid", false,-1);
    tracep->declBit(c+155,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+799,"io_deq_ready", false,-1);
    tracep->declBit(c+431,"io_deq_valid", false,-1);
    tracep->declBit(c+432,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+431,"full", false,-1);
    tracep->declBit(c+432,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+433,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+434,"io_enq_ready", false,-1);
    tracep->declBit(c+800,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+801,"io_deq_ready", false,-1);
    tracep->declBit(c+435,"io_deq_valid", false,-1);
    tracep->declBit(c+436,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+435,"full", false,-1);
    tracep->declBit(c+436,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+437,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+438,"io_enq_ready", false,-1);
    tracep->declBit(c+802,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+803,"io_deq_ready", false,-1);
    tracep->declBit(c+439,"io_deq_valid", false,-1);
    tracep->declBit(c+440,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+439,"full", false,-1);
    tracep->declBit(c+440,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+441,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+442,"io_enq_ready", false,-1);
    tracep->declBit(c+804,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+805,"io_deq_ready", false,-1);
    tracep->declBit(c+443,"io_deq_valid", false,-1);
    tracep->declBit(c+444,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+443,"full", false,-1);
    tracep->declBit(c+444,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+445,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+446,"io_enq_ready", false,-1);
    tracep->declBit(c+806,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+807,"io_deq_ready", false,-1);
    tracep->declBit(c+447,"io_deq_valid", false,-1);
    tracep->declBit(c+448,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+447,"full", false,-1);
    tracep->declBit(c+448,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+449,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+450,"io_enq_ready", false,-1);
    tracep->declBit(c+808,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+809,"io_deq_ready", false,-1);
    tracep->declBit(c+451,"io_deq_valid", false,-1);
    tracep->declBit(c+452,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+451,"full", false,-1);
    tracep->declBit(c+452,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+453,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+454,"io_enq_ready", false,-1);
    tracep->declBit(c+810,"io_enq_valid", false,-1);
    tracep->declBit(c+161,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+811,"io_deq_ready", false,-1);
    tracep->declBit(c+455,"io_deq_valid", false,-1);
    tracep->declBit(c+456,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+455,"full", false,-1);
    tracep->declBit(c+456,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+457,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1191,"reset", false,-1);
    tracep->declBit(c+134,"auto_master_out_awready", false,-1);
    tracep->declBit(c+135,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1216,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+137,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1218,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+138,"auto_master_out_wready", false,-1);
    tracep->declBit(c+139,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+140,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+141,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1215,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1190,"auto_master_out_bready", false,-1);
    tracep->declBit(c+142,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+143,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+144,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+145,"auto_master_out_arready", false,-1);
    tracep->declBit(c+146,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1216,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+147,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1217,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+148,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1218,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1108,"auto_master_out_rready", false,-1);
    tracep->declBit(c+149,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+150,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+152,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+153,"auto_master_out_rlast", false,-1);
    tracep->declBus(c+1176,"cur_pc", false,-1, 31,0);
    tracep->declBit(c+1177,"commit", false,-1);
    tracep->declBus(c+1178,"commit_pc", false,-1, 31,0);
    tracep->declBus(c+1179,"commit_pre_pc", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1191,"reset", false,-1);
    tracep->declBit(c+1205,"io_interrupt", false,-1);
    tracep->declBit(c+134,"io_master_awready", false,-1);
    tracep->declBit(c+135,"io_master_awvalid", false,-1);
    tracep->declBus(c+1216,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+136,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1217,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+137,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1218,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+138,"io_master_wready", false,-1);
    tracep->declBit(c+139,"io_master_wvalid", false,-1);
    tracep->declBus(c+140,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+141,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1215,"io_master_wlast", false,-1);
    tracep->declBit(c+1190,"io_master_bready", false,-1);
    tracep->declBit(c+142,"io_master_bvalid", false,-1);
    tracep->declBus(c+143,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+144,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+145,"io_master_arready", false,-1);
    tracep->declBit(c+146,"io_master_arvalid", false,-1);
    tracep->declBus(c+1216,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+147,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1217,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+148,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1218,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1108,"io_master_rready", false,-1);
    tracep->declBit(c+149,"io_master_rvalid", false,-1);
    tracep->declBus(c+150,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+151,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+152,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+153,"io_master_rlast", false,-1);
    tracep->declBit(c+1205,"io_slave_awready", false,-1);
    tracep->declBit(c+1205,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1219,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1216,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1217,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1220,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1218,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1205,"io_slave_wready", false,-1);
    tracep->declBit(c+1205,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1219,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1216,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1205,"io_slave_wlast", false,-1);
    tracep->declBit(c+1205,"io_slave_bready", false,-1);
    tracep->declBit(c+1205,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1218,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1216,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1205,"io_slave_arready", false,-1);
    tracep->declBit(c+1205,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1219,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1216,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1217,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1220,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1218,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1205,"io_slave_rready", false,-1);
    tracep->declBit(c+1205,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1218,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1219,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1205,"io_slave_rlast", false,-1);
    tracep->declBus(c+1216,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1176,"cur_pc", false,-1, 31,0);
    tracep->declBit(c+1177,"commit", false,-1);
    tracep->declBus(c+1178,"commit_pc", false,-1, 31,0);
    tracep->declBus(c+1179,"commit_pre_pc", false,-1, 31,0);
    tracep->declBit(c+1192,"rst_o_reset", false,-1);
    tracep->declBus(c+458,"select_pc_o_pc", false,-1, 31,0);
    tracep->declBus(c+459,"instr", false,-1, 31,0);
    tracep->declBus(c+460,"regF_o_pc", false,-1, 31,0);
    tracep->declBit(c+1221,"regF_o_io_master_awready", false,-1);
    tracep->declBit(c+1222,"regF_o_io_master_wready", false,-1);
    tracep->declBit(c+1223,"regF_o_io_master_bvalid", false,-1);
    tracep->declBus(c+461,"fetch_o_pre_pc", false,-1, 31,0);
    tracep->declBus(c+462,"fetch_o_instr", false,-1, 31,0);
    tracep->declBit(c+1215,"fetch_o_commit", false,-1);
    tracep->declBus(c+463,"regD_o_pc", false,-1, 31,0);
    tracep->declBus(c+464,"regD_o_pre_pc", false,-1, 31,0);
    tracep->declBit(c+465,"regD_o_commit", false,-1);
    tracep->declBus(c+466,"regD_o_instr", false,-1, 31,0);
    tracep->declBit(c+1224,"regD_o_io_master_awready", false,-1);
    tracep->declBit(c+1225,"regD_o_io_master_wready", false,-1);
    tracep->declBit(c+1226,"regD_o_io_master_bvalid", false,-1);
    tracep->declBus(c+467,"decode_o_valA", false,-1, 31,0);
    tracep->declBus(c+468,"decode_o_valB", false,-1, 31,0);
    tracep->declBus(c+469,"decode_o_imm", false,-1, 31,0);
    tracep->declBus(c+470,"decode_o_alu_valA_sel", false,-1, 1,0);
    tracep->declBus(c+471,"decode_o_alu_valB_sel", false,-1, 1,0);
    tracep->declBus(c+472,"decode_o_alu_func_sel", false,-1, 3,0);
    tracep->declBus(c+473,"decode_o_mem_rw", false,-1, 3,0);
    tracep->declBus(c+474,"decode_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+475,"decode_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+476,"decode_o_rs1", false,-1, 4,0);
    tracep->declBus(c+477,"decode_o_rs2", false,-1, 11,0);
    tracep->declBus(c+478,"decode_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+479,"decode_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+1227,"regE_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBit(c+480,"decode_o_is_ecall", false,-1);
    tracep->declBit(c+481,"decode_o_wb_reg_wen", false,-1);
    tracep->declBit(c+482,"decode_o_need_jump", false,-1);
    tracep->declBit(c+483,"decode_o_is_mret", false,-1);
    tracep->declBit(c+484,"decode_o_is_jalr", false,-1);
    tracep->declBus(c+485,"regE_o_valA", false,-1, 31,0);
    tracep->declBus(c+486,"regE_o_valB", false,-1, 31,0);
    tracep->declBus(c+487,"regE_o_imm", false,-1, 31,0);
    tracep->declBus(c+488,"regE_o_alu_valA_sel", false,-1, 1,0);
    tracep->declBus(c+489,"regE_o_alu_valB_sel", false,-1, 1,0);
    tracep->declBus(c+490,"regE_o_alu_func_sel", false,-1, 3,0);
    tracep->declBus(c+491,"regE_o_mem_rw", false,-1, 3,0);
    tracep->declBus(c+492,"regE_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+493,"regE_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+494,"regE_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+495,"regE_o_pc", false,-1, 31,0);
    tracep->declBus(c+496,"regE_o_instr", false,-1, 31,0);
    tracep->declBus(c+497,"regE_o_pre_pc", false,-1, 31,0);
    tracep->declBus(c+498,"regE_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBit(c+499,"regE_o_is_jalr", false,-1);
    tracep->declBit(c+500,"regE_o_need_jump", false,-1);
    tracep->declBit(c+501,"regE_o_wb_reg_wen", false,-1);
    tracep->declBit(c+502,"regE_o_commit", false,-1);
    tracep->declBit(c+503,"regE_o_is_ecall", false,-1);
    tracep->declBit(c+504,"regE_o_is_mret", false,-1);
    tracep->declBit(c+1228,"regE_o_io_master_awready", false,-1);
    tracep->declBit(c+1229,"regE_o_io_master_wready", false,-1);
    tracep->declBit(c+1230,"regE_o_io_master_bvalid", false,-1);
    tracep->declBus(c+505,"execute_o_pre_pc", false,-1, 31,0);
    tracep->declBus(c+506,"execute_o_valE", false,-1, 31,0);
    tracep->declBit(c+500,"execute_o_need_jump", false,-1);
    tracep->declBit(c+1231,"execute_o_is_jalr", false,-1);
    tracep->declBus(c+507,"regM_o_valE", false,-1, 31,0);
    tracep->declBus(c+508,"regM_o_mem_rw", false,-1, 3,0);
    tracep->declBus(c+509,"regM_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+510,"regM_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+511,"regM_o_instr", false,-1, 31,0);
    tracep->declBus(c+512,"regM_o_pc", false,-1, 31,0);
    tracep->declBus(c+513,"regM_o_pre_pc", false,-1, 31,0);
    tracep->declBus(c+514,"regM_o_valB", false,-1, 31,0);
    tracep->declBus(c+515,"regM_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+516,"regM_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBit(c+517,"regM_o_commit", false,-1);
    tracep->declBit(c+518,"regM_o_wb_reg_wen", false,-1);
    tracep->declBit(c+1232,"regM_o_io_master_awready", false,-1);
    tracep->declBit(c+1233,"regM_o_io_master_wready", false,-1);
    tracep->declBit(c+1234,"regM_o_io_master_bvalid", false,-1);
    tracep->declBus(c+519,"memory_o_valM", false,-1, 31,0);
    tracep->declBit(c+139,"memory_o_io_master_wvalid", false,-1);
    tracep->declBus(c+140,"memory_o_io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+141,"memory_o_io_master_wstrb", false,-1, 3,0);
    tracep->declBus(c+137,"memory_o_io_master_awsize", false,-1, 2,0);
    tracep->declBit(c+135,"memory_o_io_master_awvalid", false,-1);
    tracep->declBus(c+136,"memory_o_io_master_awaddr", false,-1, 31,0);
    tracep->declBit(c+146,"memory_o_io_master_arvalid", false,-1);
    tracep->declBus(c+520,"memory_o_io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+521,"axi4_mem_o_io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+522,"regW_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+523,"regW_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+524,"regW_o_valE", false,-1, 31,0);
    tracep->declBus(c+525,"regW_o_pc", false,-1, 31,0);
    tracep->declBus(c+459,"regW_o_instr", false,-1, 31,0);
    tracep->declBus(c+526,"regW_o_pre_pc", false,-1, 31,0);
    tracep->declBus(c+527,"regW_o_valM", false,-1, 31,0);
    tracep->declBus(c+528,"regW_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+529,"regW_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBit(c+530,"regW_o_commit", false,-1);
    tracep->declBit(c+531,"regW_o_wb_reg_wen", false,-1);
    tracep->declBus(c+532,"regW_o_mem_rw", false,-1, 3,0);
    tracep->declBus(c+522,"write_back_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+529,"write_back_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+533,"write_back_o_wb_valD", false,-1, 31,0);
    tracep->declBus(c+528,"write_back_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBit(c+531,"write_back_o_wb_reg_wen", false,-1);
    tracep->declBit(c+534,"ctrl_o_regF_stall", false,-1);
    tracep->declBit(c+534,"ctrl_o_regD_stall", false,-1);
    tracep->declBit(c+535,"ctrl_o_regE_stall", false,-1);
    tracep->declBit(c+535,"ctrl_o_regM_stall", false,-1);
    tracep->declBit(c+535,"ctrl_o_regW_stall", false,-1);
    tracep->declBit(c+500,"ctrl_o_regF_bubble", false,-1);
    tracep->declBit(c+500,"ctrl_o_regD_bubble", false,-1);
    tracep->declBit(c+536,"ctrl_o_regE_bubble", false,-1);
    tracep->declBit(c+1205,"ctrl_o_regM_bubble", false,-1);
    tracep->declBit(c+1205,"ctrl_o_regW_bubble", false,-1);
    tracep->declBit(c+537,"soc_stall", false,-1);
    tracep->pushNamePrefix("u_axi4_mem ");
    tracep->declBit(c+1192,"rst", false,-1);
    tracep->declBit(c+138,"axi4_mem_i_io_master_wready", false,-1);
    tracep->declBit(c+139,"memory_i_io_master_wvalid", false,-1);
    tracep->declBus(c+140,"memory_i_io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+141,"memory_i_io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+139,"axi4_mem_o_io_master_wvalid", false,-1);
    tracep->declBus(c+140,"axi4_mem_o_io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+141,"axi4_mem_o_io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+134,"axi4_mem_i_io_master_awready", false,-1);
    tracep->declBit(c+135,"memory_i_io_master_awvalid", false,-1);
    tracep->declBus(c+137,"memory_i_io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+136,"memory_i_io_master_awaddr", false,-1, 31,0);
    tracep->declBit(c+135,"axi4_mem_o_io_master_awvaild", false,-1);
    tracep->declBus(c+137,"axi4_mem_o_io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+136,"axi4_mem_o_io_master_awaddr", false,-1, 31,0);
    tracep->declBit(c+1190,"axi4_mem_o_io_master_bready", false,-1);
    tracep->declBus(c+507,"regM_i_valE", false,-1, 31,0);
    tracep->declBit(c+145,"axi4_mem_i_io_master_arready", false,-1);
    tracep->declBit(c+146,"memory_i_io_master_arvalid", false,-1);
    tracep->declBus(c+520,"memory_i_io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+147,"axi4_mem_o_io_master_araddr", false,-1, 31,0);
    tracep->declBit(c+146,"axi4_mem_o_io_master_arvalid", false,-1);
    tracep->declBus(c+148,"axi4_mem_o_io_master_arsize", false,-1, 2,0);
    tracep->declBit(c+149,"axi4_mem_i_io_master_rvalid", false,-1);
    tracep->declBus(c+151,"axi4_mem_i_io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+508,"regM_i_mem_rw", false,-1, 3,0);
    tracep->declBus(c+519,"memory_i_valM", false,-1, 31,0);
    tracep->declBit(c+1108,"axi4_mem_o_io_master_rready", false,-1);
    tracep->declBus(c+521,"axi4_mem_o_io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+147,"araddr", false,-1, 31,0);
    tracep->declBus(c+148,"arsize", false,-1, 2,0);
    tracep->declBit(c+538,"mem_no_rw", false,-1);
    tracep->declBit(c+539,"rv32_lb", false,-1);
    tracep->declBit(c+540,"rv32_lh", false,-1);
    tracep->declBit(c+541,"rv32_lw", false,-1);
    tracep->declBit(c+542,"rv32_lbu", false,-1);
    tracep->declBit(c+543,"rv32_lhu", false,-1);
    tracep->declBit(c+544,"rv32_load", false,-1);
    tracep->declBus(c+521,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ctrl ");
    tracep->declBus(c+532,"regM_o_mem_rw", false,-1, 3,0);
    tracep->declBit(c+500,"execute_i_need_jump", false,-1);
    tracep->declBit(c+138,"ctrl_i_io_master_wready", false,-1);
    tracep->declBit(c+145,"ctrl_i_io_master_arready", false,-1);
    tracep->declBus(c+476,"decode_i_rs1", false,-1, 4,0);
    tracep->declBus(c+545,"decode_i_rs2", false,-1, 4,0);
    tracep->declBus(c+492,"regE_i_rd", false,-1, 4,0);
    tracep->declBus(c+491,"regE_i_mem_rw", false,-1, 3,0);
    tracep->declBit(c+537,"soc_stall", false,-1);
    tracep->declBit(c+534,"ctrl_o_regF_stall", false,-1);
    tracep->declBit(c+534,"ctrl_o_regD_stall", false,-1);
    tracep->declBit(c+535,"ctrl_o_regE_stall", false,-1);
    tracep->declBit(c+535,"ctrl_o_regM_stall", false,-1);
    tracep->declBit(c+535,"ctrl_o_regW_stall", false,-1);
    tracep->declBit(c+500,"ctrl_o_regF_bubble", false,-1);
    tracep->declBit(c+500,"ctrl_o_regD_bubble", false,-1);
    tracep->declBit(c+536,"ctrl_o_regE_bubble", false,-1);
    tracep->declBit(c+1205,"ctrl_o_regM_bubble", false,-1);
    tracep->declBit(c+1205,"ctrl_o_regW_bubble", false,-1);
    tracep->declBit(c+546,"rv32_lb_mem", false,-1);
    tracep->declBit(c+547,"rv32_lh_mem", false,-1);
    tracep->declBit(c+548,"rv32_lw_mem", false,-1);
    tracep->declBit(c+549,"rv32_lbu_mem", false,-1);
    tracep->declBit(c+550,"rv32_lhu_mem", false,-1);
    tracep->declBit(c+551,"rv32_load_m", false,-1);
    tracep->declBit(c+552,"rv32_sb_mem", false,-1);
    tracep->declBit(c+553,"rv32_sh_mem", false,-1);
    tracep->declBit(c+554,"rv32_sw_mem", false,-1);
    tracep->declBit(c+555,"rv32_store_m", false,-1);
    tracep->declBit(c+556,"rv32_lb", false,-1);
    tracep->declBit(c+557,"rv32_lh", false,-1);
    tracep->declBit(c+558,"rv32_lw", false,-1);
    tracep->declBit(c+559,"rv32_lbu", false,-1);
    tracep->declBit(c+560,"rv32_lhu", false,-1);
    tracep->declBit(c+561,"rv32_load", false,-1);
    tracep->declBit(c+562,"rv32_sb", false,-1);
    tracep->declBit(c+563,"rv32_sh", false,-1);
    tracep->declBit(c+564,"rv32_sw", false,-1);
    tracep->declBit(c+565,"rv32_store", false,-1);
    tracep->declBit(c+566,"load_use", false,-1);
    tracep->declBit(c+567,"store_use", false,-1);
    tracep->declBit(c+500,"branch_bubble", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_decode ");
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1192,"rst", false,-1);
    tracep->declBus(c+466,"regD_i_instr", false,-1, 31,0);
    tracep->declBus(c+524,"regW_i_valE", false,-1, 31,0);
    tracep->declBus(c+527,"regW_i_valM", false,-1, 31,0);
    tracep->declBus(c+523,"regW_i_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+522,"regW_i_wb_rd", false,-1, 4,0);
    tracep->declBit(c+531,"regW_i_wb_reg_wen", false,-1);
    tracep->declBus(c+525,"regW_i_pc", false,-1, 31,0);
    tracep->declBus(c+507,"regM_i_valE", false,-1, 31,0);
    tracep->declBus(c+521,"axi4_mem_i_io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+510,"regM_i_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+509,"regM_i_wb_rd", false,-1, 4,0);
    tracep->declBit(c+518,"regM_i_wb_reg_wen", false,-1);
    tracep->declBus(c+1227,"regE_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+508,"regM_i_mem_rw", false,-1, 3,0);
    tracep->declBit(c+501,"regE_i_wb_reg_wen", false,-1);
    tracep->declBus(c+492,"regE_i_wb_rd", false,-1, 4,0);
    tracep->declBus(c+506,"execute_i_valE", false,-1, 31,0);
    tracep->declBit(c+531,"write_back_i_wb_reg_wen", false,-1);
    tracep->declBus(c+522,"write_back_i_wb_rd", false,-1, 4,0);
    tracep->declBus(c+533,"write_back_i_wb_valD", false,-1, 31,0);
    tracep->declBus(c+528,"write_back_i_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+529,"write_back_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+467,"decode_o_valA", false,-1, 31,0);
    tracep->declBus(c+468,"decode_o_valB", false,-1, 31,0);
    tracep->declBus(c+469,"decode_o_imm", false,-1, 31,0);
    tracep->declBus(c+470,"decode_o_alu_valA_sel", false,-1, 1,0);
    tracep->declBus(c+471,"decode_o_alu_valB_sel", false,-1, 1,0);
    tracep->declBus(c+472,"decode_o_alu_func_sel", false,-1, 3,0);
    tracep->declBus(c+473,"decode_o_mem_rw", false,-1, 3,0);
    tracep->declBus(c+479,"decode_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBit(c+481,"decode_o_wb_reg_wen", false,-1);
    tracep->declBus(c+474,"decode_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+475,"decode_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+476,"decode_o_rs1", false,-1, 4,0);
    tracep->declBus(c+477,"decode_o_rs2", false,-1, 11,0);
    tracep->declBus(c+478,"decode_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBit(c+482,"decode_o_need_jump", false,-1);
    tracep->declBit(c+484,"decode_o_is_jalr", false,-1);
    tracep->declBit(c+483,"decode_o_is_mret", false,-1);
    tracep->declBit(c+480,"decode_o_is_ecall", false,-1);
    tracep->declBus(c+466,"rv32I_instr", false,-1, 31,0);
    tracep->declBus(c+568,"rv32I_opcode", false,-1, 6,0);
    tracep->declBus(c+569,"rv32I_rd", false,-1, 4,0);
    tracep->declBus(c+479,"rv32I_csr_rd", false,-1, 11,0);
    tracep->declBus(c+570,"rv32I_func3", false,-1, 2,0);
    tracep->declBus(c+571,"rv32I_rs1", false,-1, 4,0);
    tracep->declBus(c+572,"rv32I_rs2", false,-1, 4,0);
    tracep->declBus(c+573,"rv32I_func7", false,-1, 6,0);
    tracep->declBit(c+574,"opcode_I_Logic_Operator", false,-1);
    tracep->declBit(c+575,"opcode_I_LOAD", false,-1);
    tracep->declBit(c+576,"opcode_I_CSR", false,-1);
    tracep->declBit(c+484,"opcode_I_JALR", false,-1);
    tracep->declBit(c+577,"opcode_R_TYPE", false,-1);
    tracep->declBit(c+578,"opcode_B_TYPE", false,-1);
    tracep->declBit(c+579,"opcode_S_TYPE", false,-1);
    tracep->declBit(c+580,"opcode_J_TYPE", false,-1);
    tracep->declBit(c+581,"opcode_U_lui", false,-1);
    tracep->declBit(c+582,"opcode_U_auipc", false,-1);
    tracep->declBit(c+583,"opcode_U_TYPE", false,-1);
    tracep->declBit(c+574,"rv32I_I_Logic_Operator", false,-1);
    tracep->declBit(c+575,"rv32I_I_LOAD", false,-1);
    tracep->declBit(c+484,"rv32I_I_JALR", false,-1);
    tracep->declBit(c+576,"rv32I_I_CSR", false,-1);
    tracep->declBit(c+584,"rv32I_I_TYPE", false,-1);
    tracep->declBit(c+579,"rv32I_S_TYPE", false,-1);
    tracep->declBit(c+577,"rv32I_R_TYPE", false,-1);
    tracep->declBit(c+578,"rv32I_B_TYPE", false,-1);
    tracep->declBit(c+580,"rv32I_J_TYPE", false,-1);
    tracep->declBit(c+583,"rv32I_U_TYPE", false,-1);
    tracep->declBit(c+585,"func3_000", false,-1);
    tracep->declBit(c+586,"func3_001", false,-1);
    tracep->declBit(c+587,"func3_010", false,-1);
    tracep->declBit(c+588,"func3_011", false,-1);
    tracep->declBit(c+589,"func3_100", false,-1);
    tracep->declBit(c+590,"func3_101", false,-1);
    tracep->declBit(c+591,"func3_110", false,-1);
    tracep->declBit(c+592,"func3_111", false,-1);
    tracep->declBit(c+585,"func3_R_add_sub", false,-1);
    tracep->declBit(c+586,"func3_R_sll", false,-1);
    tracep->declBit(c+587,"func3_R_slt", false,-1);
    tracep->declBit(c+588,"func3_R_sltu", false,-1);
    tracep->declBit(c+589,"func3_R_xor", false,-1);
    tracep->declBit(c+590,"func3_R_srl_sra", false,-1);
    tracep->declBit(c+591,"func3_R_or", false,-1);
    tracep->declBit(c+592,"func3_R_and", false,-1);
    tracep->declBit(c+585,"func3_B_beq", false,-1);
    tracep->declBit(c+586,"func3_B_bne", false,-1);
    tracep->declBit(c+589,"func3_B_blt", false,-1);
    tracep->declBit(c+590,"func3_B_bge", false,-1);
    tracep->declBit(c+591,"func3_B_bltu", false,-1);
    tracep->declBit(c+592,"func3_B_bgeu", false,-1);
    tracep->declBit(c+585,"func3_I_addi", false,-1);
    tracep->declBit(c+586,"func3_I_slli", false,-1);
    tracep->declBit(c+587,"func3_I_slti", false,-1);
    tracep->declBit(c+588,"func3_I_sltiu", false,-1);
    tracep->declBit(c+589,"func3_I_xori", false,-1);
    tracep->declBit(c+590,"func3_I_srli_srai", false,-1);
    tracep->declBit(c+591,"func3_I_ori", false,-1);
    tracep->declBit(c+592,"func3_I_andi", false,-1);
    tracep->declBit(c+585,"func3_I_lb", false,-1);
    tracep->declBit(c+586,"func3_I_lh", false,-1);
    tracep->declBit(c+587,"func3_I_lw", false,-1);
    tracep->declBit(c+589,"func3_I_lbu", false,-1);
    tracep->declBit(c+590,"func3_I_lhu", false,-1);
    tracep->declBit(c+586,"func3_I_csrrw", false,-1);
    tracep->declBit(c+587,"func3_I_csrrs", false,-1);
    tracep->declBit(c+585,"func3_S_sb", false,-1);
    tracep->declBit(c+586,"func3_S_sh", false,-1);
    tracep->declBit(c+587,"func3_S_sw", false,-1);
    tracep->declBit(c+593,"func7_0000000", false,-1);
    tracep->declBit(c+594,"func7_0100000", false,-1);
    tracep->declBit(c+594,"func7_sra", false,-1);
    tracep->declBit(c+594,"func7_srai", false,-1);
    tracep->declBit(c+593,"func7_srl", false,-1);
    tracep->declBit(c+593,"func7_srli", false,-1);
    tracep->declBit(c+593,"func7_add", false,-1);
    tracep->declBit(c+594,"func7_sub", false,-1);
    tracep->declBit(c+593,"func7_slli", false,-1);
    tracep->declBit(c+593,"func7_sll", false,-1);
    tracep->declBit(c+581,"rv32I_U_lui", false,-1);
    tracep->declBit(c+582,"rv32I_U_auipc", false,-1);
    tracep->declBit(c+595,"rv32I_I_addi", false,-1);
    tracep->declBit(c+596,"rv32I_I_slli", false,-1);
    tracep->declBit(c+597,"rv32I_I_slti", false,-1);
    tracep->declBit(c+598,"rv32I_I_sltiu", false,-1);
    tracep->declBit(c+599,"rv32I_I_xori", false,-1);
    tracep->declBit(c+600,"rv32I_I_srli", false,-1);
    tracep->declBit(c+601,"rv32I_I_srai", false,-1);
    tracep->declBit(c+602,"rv32I_I_ori", false,-1);
    tracep->declBit(c+603,"rv32I_I_andi", false,-1);
    tracep->declBit(c+604,"rv32I_I_lb", false,-1);
    tracep->declBit(c+605,"rv32I_I_lh", false,-1);
    tracep->declBit(c+606,"rv32I_I_lw", false,-1);
    tracep->declBit(c+607,"rv32I_I_lbu", false,-1);
    tracep->declBit(c+608,"rv32I_I_lhu", false,-1);
    tracep->declBit(c+484,"rv32I_I_jalr", false,-1);
    tracep->declBit(c+480,"rv32I_ecall", false,-1);
    tracep->declBit(c+483,"rv32I_mret", false,-1);
    tracep->declBit(c+609,"rv32I_I_csrrw", false,-1);
    tracep->declBit(c+610,"rv32I_I_csrrs", false,-1);
    tracep->declBit(c+611,"rv32I_R_add", false,-1);
    tracep->declBit(c+612,"rv32I_R_sub", false,-1);
    tracep->declBit(c+613,"rv32I_R_sll", false,-1);
    tracep->declBit(c+614,"rv32I_R_slt", false,-1);
    tracep->declBit(c+615,"rv32I_R_sltu", false,-1);
    tracep->declBit(c+616,"rv32I_R_xor", false,-1);
    tracep->declBit(c+617,"rv32I_R_srl", false,-1);
    tracep->declBit(c+618,"rv32I_R_sra", false,-1);
    tracep->declBit(c+619,"rv32I_R_or", false,-1);
    tracep->declBit(c+620,"rv32I_R_and", false,-1);
    tracep->declBit(c+621,"rv32I_B_beq", false,-1);
    tracep->declBit(c+622,"rv32I_B_bne", false,-1);
    tracep->declBit(c+623,"rv32I_B_blt", false,-1);
    tracep->declBit(c+624,"rv32I_B_bge", false,-1);
    tracep->declBit(c+625,"rv32I_B_bltu", false,-1);
    tracep->declBit(c+626,"rv32I_B_bgeu", false,-1);
    tracep->declBit(c+627,"rv32I_S_sb", false,-1);
    tracep->declBit(c+628,"rv32I_S_sh", false,-1);
    tracep->declBit(c+629,"rv32I_S_sw", false,-1);
    tracep->declBit(c+580,"rv32I_J_jal", false,-1);
    tracep->declBus(c+630,"imm_U_TYPE", false,-1, 31,0);
    tracep->declBus(c+631,"imm_I_TYPE", false,-1, 31,0);
    tracep->declBus(c+632,"imm_I_SHAMT", false,-1, 31,0);
    tracep->declBus(c+633,"imm_S_TYPE", false,-1, 31,0);
    tracep->declBus(c+1219,"imm_R_TYPE", false,-1, 31,0);
    tracep->declBus(c+634,"imm_B_TYPE", false,-1, 31,0);
    tracep->declBus(c+635,"imm_J_TYPE", false,-1, 31,0);
    tracep->declBit(c+584,"opcode_I_TYPE", false,-1);
    tracep->declBus(c+636,"regfile_o_valA", false,-1, 31,0);
    tracep->declBus(c+637,"regfile_o_valB", false,-1, 31,0);
    tracep->declBus(c+638,"regfile_i_rs1", false,-1, 4,0);
    tracep->declBus(c+639,"regfile_i_rs2", false,-1, 11,0);
    tracep->declBit(c+640,"soc", false,-1);
    tracep->declBit(c+541,"is_load_instr", false,-1);
    tracep->pushNamePrefix("u_regfile ");
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1192,"rst", false,-1);
    tracep->declBus(c+528,"write_back_i_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+529,"write_back_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBit(c+531,"write_back_i_wb_reg_wen", false,-1);
    tracep->declBus(c+522,"write_back_i_wb_rd", false,-1, 4,0);
    tracep->declBus(c+525,"regW_i_pc", false,-1, 31,0);
    tracep->declBus(c+533,"write_back_i_wb_valD", false,-1, 31,0);
    tracep->declBus(c+638,"decode_i_rs1", false,-1, 4,0);
    tracep->declBus(c+639,"decode_i_rs2", false,-1, 11,0);
    tracep->declBus(c+636,"regfile_o_valA", false,-1, 31,0);
    tracep->declBus(c+637,"regfile_o_valB", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+641+i*1,"regfile", true,(i+0), 31,0);
    }
    tracep->declBus(c+673,"mstatus", false,-1, 31,0);
    tracep->declBus(c+674,"mtvec", false,-1, 31,0);
    tracep->declBus(c+675,"mcause", false,-1, 31,0);
    tracep->declBus(c+676,"mepc", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_execute ");
    tracep->declBus(c+485,"regE_i_valA", false,-1, 31,0);
    tracep->declBus(c+486,"regE_i_valB", false,-1, 31,0);
    tracep->declBus(c+487,"regE_i_imm", false,-1, 31,0);
    tracep->declBus(c+495,"regE_i_pc", false,-1, 31,0);
    tracep->declBus(c+488,"regE_i_alu_valA_sel", false,-1, 1,0);
    tracep->declBus(c+489,"regE_i_alu_valB_sel", false,-1, 1,0);
    tracep->declBus(c+490,"regE_i_alu_func_sel", false,-1, 3,0);
    tracep->declBit(c+500,"regE_i_need_jump", false,-1);
    tracep->declBit(c+499,"regE_i_is_jalr", false,-1);
    tracep->declBit(c+504,"regE_i_is_mret", false,-1);
    tracep->declBit(c+503,"regE_i_is_ecall", false,-1);
    tracep->declBus(c+497,"regE_i_pre_pc", false,-1, 31,0);
    tracep->declBus(c+505,"execute_o_pre_pc", false,-1, 31,0);
    tracep->declBus(c+506,"execute_o_valE", false,-1, 31,0);
    tracep->declBit(c+500,"execute_o_need_jump", false,-1);
    tracep->declBus(c+677,"alu_valA", false,-1, 31,0);
    tracep->declBus(c+678,"alu_valB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+460,"regF_i_pc", false,-1, 31,0);
    tracep->declBus(c+461,"fetch_o_pre_pc", false,-1, 31,0);
    tracep->declBus(c+462,"fetch_o_instr", false,-1, 31,0);
    tracep->declBit(c+1215,"fetch_o_commit", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_memory ");
    tracep->declBit(c+134,"io_master_awready", false,-1);
    tracep->declBit(c+138,"io_master_wready", false,-1);
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1192,"rst", false,-1);
    tracep->declBus(c+507,"regM_i_valE", false,-1, 31,0);
    tracep->declBus(c+514,"regM_i_valB", false,-1, 31,0);
    tracep->declBus(c+508,"regM_i_mem_rw", false,-1, 3,0);
    tracep->declBus(c+511,"instr", false,-1, 31,0);
    tracep->declBit(c+139,"memory_o_io_master_wvalid", false,-1);
    tracep->declBus(c+140,"memory_o_io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+141,"memory_o_io_master_wstrb", false,-1, 3,0);
    tracep->declBus(c+137,"memory_o_io_master_awsize", false,-1, 2,0);
    tracep->declBit(c+135,"memory_o_io_master_awvalid", false,-1);
    tracep->declBus(c+136,"memory_o_io_master_awaddr", false,-1, 31,0);
    tracep->declBit(c+146,"memory_o_io_master_arvalid", false,-1);
    tracep->declBus(c+520,"memory_o_io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+519,"memory_o_valM", false,-1, 31,0);
    tracep->declBit(c+538,"mem_no_rw", false,-1);
    tracep->declBit(c+539,"rv32_lb", false,-1);
    tracep->declBit(c+540,"rv32_lh", false,-1);
    tracep->declBit(c+541,"rv32_lw", false,-1);
    tracep->declBit(c+542,"rv32_lbu", false,-1);
    tracep->declBit(c+543,"rv32_lhu", false,-1);
    tracep->declBit(c+544,"rv32_load", false,-1);
    tracep->declBus(c+679,"read_mem_data", false,-1, 31,0);
    tracep->declBit(c+680,"rv32_sb", false,-1);
    tracep->declBit(c+681,"rv32_sh", false,-1);
    tracep->declBit(c+682,"rv32_sw", false,-1);
    tracep->declBus(c+514,"data", false,-1, 31,0);
    tracep->declBus(c+507,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regD ");
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1192,"rst", false,-1);
    tracep->declBit(c+500,"ctrl_i_regD_bubble", false,-1);
    tracep->declBit(c+534,"ctrl_i_regD_stall", false,-1);
    tracep->declBus(c+462,"fetch_i_instr", false,-1, 31,0);
    tracep->declBus(c+460,"regF_i_pc", false,-1, 31,0);
    tracep->declBus(c+461,"fetch_i_pre_pc", false,-1, 31,0);
    tracep->declBit(c+1215,"fetch_i_commit", false,-1);
    tracep->declBus(c+466,"regD_o_instr", false,-1, 31,0);
    tracep->declBus(c+463,"regD_o_pc", false,-1, 31,0);
    tracep->declBus(c+464,"regD_o_pre_pc", false,-1, 31,0);
    tracep->declBit(c+465,"regD_o_commit", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regE ");
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1192,"rst", false,-1);
    tracep->declBit(c+535,"ctrl_i_regE_stall", false,-1);
    tracep->declBit(c+536,"ctrl_i_regE_bubble", false,-1);
    tracep->declBus(c+467,"decode_i_valA", false,-1, 31,0);
    tracep->declBus(c+468,"decode_i_valB", false,-1, 31,0);
    tracep->declBus(c+469,"decode_i_imm", false,-1, 31,0);
    tracep->declBus(c+470,"decode_i_alu_valA_sel", false,-1, 1,0);
    tracep->declBus(c+471,"decode_i_alu_valB_sel", false,-1, 1,0);
    tracep->declBus(c+472,"decode_i_alu_func_sel", false,-1, 3,0);
    tracep->declBus(c+473,"decode_i_mem_rw", false,-1, 3,0);
    tracep->declBit(c+481,"decode_i_wb_reg_wen", false,-1);
    tracep->declBus(c+474,"decode_i_wb_rd", false,-1, 4,0);
    tracep->declBus(c+479,"decode_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+475,"decode_i_wb_valD_sel", false,-1, 1,0);
    tracep->declBit(c+482,"decode_i_need_jump", false,-1);
    tracep->declBit(c+484,"decode_i_is_jalr", false,-1);
    tracep->declBit(c+483,"decode_i_is_mret", false,-1);
    tracep->declBit(c+480,"decode_i_is_ecall", false,-1);
    tracep->declBus(c+478,"decode_i_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+466,"regD_i_instr", false,-1, 31,0);
    tracep->declBus(c+463,"regD_i_pc", false,-1, 31,0);
    tracep->declBit(c+465,"regD_i_commit", false,-1);
    tracep->declBus(c+464,"regD_i_pre_pc", false,-1, 31,0);
    tracep->declBus(c+485,"regE_o_valA", false,-1, 31,0);
    tracep->declBus(c+486,"regE_o_valB", false,-1, 31,0);
    tracep->declBus(c+487,"regE_o_imm", false,-1, 31,0);
    tracep->declBus(c+488,"regE_o_alu_valA_sel", false,-1, 1,0);
    tracep->declBus(c+489,"regE_o_alu_valB_sel", false,-1, 1,0);
    tracep->declBus(c+490,"regE_o_alu_func_sel", false,-1, 3,0);
    tracep->declBus(c+491,"regE_o_mem_rw", false,-1, 3,0);
    tracep->declBit(c+501,"regE_o_wb_reg_wen", false,-1);
    tracep->declBus(c+492,"regE_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+493,"regE_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+498,"regE_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+494,"regE_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBit(c+500,"regE_o_need_jump", false,-1);
    tracep->declBus(c+495,"regE_o_pc", false,-1, 31,0);
    tracep->declBit(c+502,"regE_o_commit", false,-1);
    tracep->declBus(c+496,"regE_o_instr", false,-1, 31,0);
    tracep->declBus(c+497,"regE_o_pre_pc", false,-1, 31,0);
    tracep->declBit(c+499,"regE_o_is_jalr", false,-1);
    tracep->declBit(c+504,"regE_o_is_mret", false,-1);
    tracep->declBit(c+503,"regE_o_is_ecall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regF ");
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1192,"rst", false,-1);
    tracep->declBit(c+534,"ctrl_i_regF_stall", false,-1);
    tracep->declBus(c+458,"select_pc_o_pc", false,-1, 31,0);
    tracep->declBit(c+537,"soc_stall", false,-1);
    tracep->declBit(c+500,"ctrl_o_regF_bubble", false,-1);
    tracep->declBus(c+460,"regF_o_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regM ");
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1192,"rst", false,-1);
    tracep->declBit(c+535,"ctrl_i_regM_stall", false,-1);
    tracep->declBus(c+506,"execute_i_valE", false,-1, 31,0);
    tracep->declBus(c+505,"execute_i_pre_pc", false,-1, 31,0);
    tracep->declBus(c+491,"regE_i_mem_rw", false,-1, 3,0);
    tracep->declBit(c+501,"regE_i_wb_reg_wen", false,-1);
    tracep->declBus(c+492,"regE_i_wb_rd", false,-1, 4,0);
    tracep->declBus(c+498,"regE_i_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+493,"regE_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+494,"regE_i_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+486,"regE_i_valB", false,-1, 31,0);
    tracep->declBus(c+496,"regE_i_instr", false,-1, 31,0);
    tracep->declBus(c+495,"regE_i_pc", false,-1, 31,0);
    tracep->declBit(c+502,"regE_i_commit", false,-1);
    tracep->declBus(c+507,"regM_o_valE", false,-1, 31,0);
    tracep->declBus(c+514,"regM_o_valB", false,-1, 31,0);
    tracep->declBus(c+508,"regM_o_mem_rw", false,-1, 3,0);
    tracep->declBit(c+518,"regM_o_wb_reg_wen", false,-1);
    tracep->declBus(c+509,"regM_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+516,"regM_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+510,"regM_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+515,"regM_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+511,"regM_o_instr", false,-1, 31,0);
    tracep->declBus(c+512,"regM_o_pc", false,-1, 31,0);
    tracep->declBit(c+517,"regM_o_commit", false,-1);
    tracep->declBus(c+513,"regM_o_pre_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regW ");
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1192,"rst", false,-1);
    tracep->declBit(c+535,"ctrl_i_regW_stall", false,-1);
    tracep->declBit(c+518,"regM_i_wb_reg_wen", false,-1);
    tracep->declBus(c+509,"regM_i_wb_rd", false,-1, 4,0);
    tracep->declBus(c+516,"regM_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+515,"regM_i_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+510,"regM_i_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+507,"regM_i_valE", false,-1, 31,0);
    tracep->declBus(c+508,"regM_o_mem_rw", false,-1, 3,0);
    tracep->declBus(c+532,"regW_o_mem_rw", false,-1, 3,0);
    tracep->declBus(c+519,"memory_i_valM", false,-1, 31,0);
    tracep->declBus(c+512,"regM_i_pc", false,-1, 31,0);
    tracep->declBus(c+511,"regM_i_instr", false,-1, 31,0);
    tracep->declBit(c+517,"regM_i_commit", false,-1);
    tracep->declBus(c+513,"regM_i_pre_pc", false,-1, 31,0);
    tracep->declBit(c+531,"regW_o_wb_reg_wen", false,-1);
    tracep->declBus(c+522,"regW_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+529,"regW_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+528,"regW_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+523,"regW_o_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+524,"regW_o_valE", false,-1, 31,0);
    tracep->declBus(c+527,"regW_o_valM", false,-1, 31,0);
    tracep->declBus(c+525,"regW_o_pc", false,-1, 31,0);
    tracep->declBus(c+459,"regW_o_instr", false,-1, 31,0);
    tracep->declBit(c+530,"regW_o_commit", false,-1);
    tracep->declBus(c+526,"regW_o_pre_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rst ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1191,"reset", false,-1);
    tracep->declBit(c+1192,"rst_o_reset", false,-1);
    tracep->declBit(c+1193,"rst_n_r1", false,-1);
    tracep->declBit(c+1192,"rst_n_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_select_pc ");
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1192,"rst", false,-1);
    tracep->declBus(c+461,"fetch_i_pre_pc", false,-1, 31,0);
    tracep->declBus(c+505,"execute_i_pre_pc", false,-1, 31,0);
    tracep->declBit(c+500,"execute_i_need_jump", false,-1);
    tracep->declBus(c+458,"select_pc_o_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_write_back ");
    tracep->declBit(c+531,"regW_i_wb_reg_wen", false,-1);
    tracep->declBus(c+522,"regW_i_wb_rd", false,-1, 4,0);
    tracep->declBus(c+529,"regW_i_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+523,"regW_i_wb_valD_sel", false,-1, 1,0);
    tracep->declBus(c+528,"regW_i_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+527,"regW_i_valM", false,-1, 31,0);
    tracep->declBus(c+521,"axi4_mem_i_io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+525,"regW_i_pc", false,-1, 31,0);
    tracep->declBus(c+524,"regW_i_valE", false,-1, 31,0);
    tracep->declBus(c+459,"regW_i_instr", false,-1, 31,0);
    tracep->declBit(c+531,"write_back_o_wb_reg_wen", false,-1);
    tracep->declBus(c+522,"write_back_o_wb_rd", false,-1, 4,0);
    tracep->declBus(c+529,"write_back_o_wb_csr_rd", false,-1, 11,0);
    tracep->declBus(c+528,"write_back_o_wb_csr_sel", false,-1, 2,0);
    tracep->declBus(c+533,"write_back_o_wb_valD", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"io_d", false,-1);
    tracep->declBit(c+683,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"io_d", false,-1);
    tracep->declBit(c+683,"io_q", false,-1);
    tracep->declBit(c+683,"sync_0", false,-1);
    tracep->declBit(c+684,"sync_1", false,-1);
    tracep->declBit(c+685,"sync_2", false,-1);
    tracep->declBit(c+686,"sync_3", false,-1);
    tracep->declBit(c+687,"sync_4", false,-1);
    tracep->declBit(c+688,"sync_5", false,-1);
    tracep->declBit(c+689,"sync_6", false,-1);
    tracep->declBit(c+690,"sync_7", false,-1);
    tracep->declBit(c+691,"sync_8", false,-1);
    tracep->declBit(c+692,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+740,"auto_in_psel", false,-1);
    tracep->declBit(c+741,"auto_in_penable", false,-1);
    tracep->declBit(c+1058,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1063,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1204,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1059,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1212,"auto_in_pready", false,-1);
    tracep->declBit(c+1213,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1214,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1156,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1157,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1158,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1159,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1160,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1161,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1162,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1163,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1164,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1165,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBus(c+1079,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+740,"in_psel", false,-1);
    tracep->declBit(c+741,"in_penable", false,-1);
    tracep->declBus(c+1204,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1058,"in_pwrite", false,-1);
    tracep->declBus(c+1059,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1212,"in_pready", false,-1);
    tracep->declBus(c+1214,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1213,"in_pslverr", false,-1);
    tracep->declBus(c+1156,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1157,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1158,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1159,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1160,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1161,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1162,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1163,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1164,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1165,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+738,"auto_in_psel", false,-1);
    tracep->declBit(c+739,"auto_in_penable", false,-1);
    tracep->declBit(c+1058,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1063,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1204,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1059,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1209,"auto_in_pready", false,-1);
    tracep->declBit(c+1210,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1211,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1166,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1167,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBus(c+1079,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+738,"in_psel", false,-1);
    tracep->declBit(c+739,"in_penable", false,-1);
    tracep->declBus(c+1204,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1058,"in_pwrite", false,-1);
    tracep->declBus(c+1059,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1209,"in_pready", false,-1);
    tracep->declBus(c+1211,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1210,"in_pslverr", false,-1);
    tracep->declBit(c+1166,"ps2_clk", false,-1);
    tracep->declBit(c+1167,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+236,"auto_in_awvalid", false,-1);
    tracep->declBit(c+237,"auto_in_wvalid", false,-1);
    tracep->declBit(c+238,"auto_in_arready", false,-1);
    tracep->declBit(c+239,"auto_in_arvalid", false,-1);
    tracep->declBus(c+54,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+240,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+747,"auto_in_rready", false,-1);
    tracep->declBit(c+241,"auto_in_rvalid", false,-1);
    tracep->declBus(c+242,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+243,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+241,"state", false,-1);
    tracep->declBus(c+243,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+242,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+693,"raddr", false,-1, 31,0);
    tracep->declBit(c+694,"ren", false,-1);
    tracep->declBus(c+695,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+1064,"auto_in_psel", false,-1);
    tracep->declBit(c+742,"auto_in_penable", false,-1);
    tracep->declBit(c+1058,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1057,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1204,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1059,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1185,"auto_in_pready", false,-1);
    tracep->declBit(c+1205,"auto_in_pslverr", false,-1);
    tracep->declBus(c+10,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1182,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1183,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1133,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBus(c+1057,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1064,"in_psel", false,-1);
    tracep->declBit(c+742,"in_penable", false,-1);
    tracep->declBus(c+1204,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1058,"in_pwrite", false,-1);
    tracep->declBus(c+1059,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1185,"in_pready", false,-1);
    tracep->declBus(c+10,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1205,"in_pslverr", false,-1);
    tracep->declBit(c+1182,"qspi_sck", false,-1);
    tracep->declBit(c+1183,"qspi_ce_n", false,-1);
    tracep->declBus(c+1133,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1133,"din", false,-1, 3,0);
    tracep->declBus(c+1140,"dout", false,-1, 3,0);
    tracep->declBus(c+1141,"douten", false,-1, 3,0);
    tracep->declBit(c+1194,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1154,"clk_i", false,-1);
    tracep->declBit(c+1155,"rst_i", false,-1);
    tracep->declBus(c+1057,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1059,"dat_i", false,-1, 31,0);
    tracep->declBus(c+10,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1060,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1064,"cyc_i", false,-1);
    tracep->declBit(c+1064,"stb_i", false,-1);
    tracep->declBit(c+1194,"ack_o", false,-1);
    tracep->declBit(c+1058,"we_i", false,-1);
    tracep->declBit(c+1182,"sck", false,-1);
    tracep->declBit(c+1183,"ce_n", false,-1);
    tracep->declBus(c+1133,"din", false,-1, 3,0);
    tracep->declBus(c+1140,"dout", false,-1, 3,0);
    tracep->declBus(c+1141,"douten", false,-1, 3,0);
    tracep->declBus(c+1235,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1236,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+827,"mr_sck", false,-1);
    tracep->declBit(c+828,"mr_ce_n", false,-1);
    tracep->declBus(c+1133,"mr_din", false,-1, 3,0);
    tracep->declBus(c+829,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+830,"mr_doe", false,-1);
    tracep->declBit(c+831,"mw_sck", false,-1);
    tracep->declBit(c+832,"mw_ce_n", false,-1);
    tracep->declBus(c+1133,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1142,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+833,"mw_doe", false,-1);
    tracep->declBit(c+1143,"mr_rd", false,-1);
    tracep->declBit(c+834,"mr_done", false,-1);
    tracep->declBit(c+1144,"mw_wr", false,-1);
    tracep->declBit(c+1145,"mw_done", false,-1);
    tracep->declBit(c+1064,"wb_valid", false,-1);
    tracep->declBit(c+1080,"wb_we", false,-1);
    tracep->declBit(c+1081,"wb_re", false,-1);
    tracep->declBit(c+835,"state", false,-1);
    tracep->declBit(c+1146,"nstate", false,-1);
    tracep->declBus(c+1082,"size", false,-1, 2,0);
    tracep->declBus(c+1083,"byte0", false,-1, 7,0);
    tracep->declBus(c+1084,"byte1", false,-1, 7,0);
    tracep->declBus(c+1085,"byte2", false,-1, 7,0);
    tracep->declBus(c+1086,"byte3", false,-1, 7,0);
    tracep->declBus(c+1087,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1195,"rst_n", false,-1);
    tracep->declBus(c+1088,"addr", false,-1, 23,0);
    tracep->declBit(c+1143,"rd", false,-1);
    tracep->declBus(c+1237,"size", false,-1, 2,0);
    tracep->declBit(c+834,"done", false,-1);
    tracep->declBus(c+10,"line", false,-1, 31,0);
    tracep->declBit(c+827,"sck", false,-1);
    tracep->declBit(c+828,"ce_n", false,-1);
    tracep->declBus(c+1133,"din", false,-1, 3,0);
    tracep->declBus(c+829,"dout", false,-1, 3,0);
    tracep->declBit(c+830,"douten", false,-1);
    tracep->declBus(c+1235,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1236,"READ", false,-1, 0,0);
    tracep->declBus(c+1238,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+836,"state", false,-1);
    tracep->declBit(c+1147,"nstate", false,-1);
    tracep->declBus(c+837,"counter", false,-1, 7,0);
    tracep->declBus(c+838,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+696+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1239,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+839,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1195,"rst_n", false,-1);
    tracep->declBus(c+1089,"addr", false,-1, 23,0);
    tracep->declBus(c+1087,"line", false,-1, 31,0);
    tracep->declBus(c+1082,"size", false,-1, 2,0);
    tracep->declBit(c+1144,"wr", false,-1);
    tracep->declBit(c+1145,"done", false,-1);
    tracep->declBit(c+831,"sck", false,-1);
    tracep->declBit(c+832,"ce_n", false,-1);
    tracep->declBus(c+1133,"din", false,-1, 3,0);
    tracep->declBus(c+1142,"dout", false,-1, 3,0);
    tracep->declBit(c+833,"douten", false,-1);
    tracep->declBus(c+1235,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1236,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1090,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+840,"state", false,-1);
    tracep->declBit(c+1148,"nstate", false,-1);
    tracep->declBus(c+841,"counter", false,-1, 7,0);
    tracep->declBus(c+842,"saddr", false,-1, 23,0);
    tracep->declBus(c+1240,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+734,"auto_in_psel", false,-1);
    tracep->declBit(c+735,"auto_in_penable", false,-1);
    tracep->declBit(c+1058,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1057,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1204,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1059,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+823,"auto_in_pready", false,-1);
    tracep->declBit(c+1205,"auto_in_pslverr", false,-1);
    tracep->declBus(c+824,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1184,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+814,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+815,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+816,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+817,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+818,"sdram_bundle_we", false,-1);
    tracep->declBus(c+819,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+820,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+821,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+822,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBus(c+1057,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+734,"in_psel", false,-1);
    tracep->declBit(c+735,"in_penable", false,-1);
    tracep->declBus(c+1204,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1058,"in_pwrite", false,-1);
    tracep->declBus(c+1059,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+823,"in_pready", false,-1);
    tracep->declBus(c+824,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1205,"in_pslverr", false,-1);
    tracep->declBit(c+1184,"sdram_clk", false,-1);
    tracep->declBit(c+814,"sdram_cke", false,-1);
    tracep->declBit(c+815,"sdram_cs", false,-1);
    tracep->declBit(c+816,"sdram_ras", false,-1);
    tracep->declBit(c+817,"sdram_cas", false,-1);
    tracep->declBit(c+818,"sdram_we", false,-1);
    tracep->declBus(c+819,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+820,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+821,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+822,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+843,"sdram_dout_en", false,-1);
    tracep->declBus(c+844,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+700,"state", false,-1, 1,0);
    tracep->declBit(c+845,"req_accept", false,-1);
    tracep->declBit(c+1091,"is_read", false,-1);
    tracep->declBit(c+1092,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1154,"clk_i", false,-1);
    tracep->declBit(c+1155,"rst_i", false,-1);
    tracep->declBus(c+1093,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1091,"inport_rd_i", false,-1);
    tracep->declBus(c+1217,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1057,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1059,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+822,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+845,"inport_accept_o", false,-1);
    tracep->declBit(c+823,"inport_ack_o", false,-1);
    tracep->declBit(c+1205,"inport_error_o", false,-1);
    tracep->declBus(c+824,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1184,"sdram_clk_o", false,-1);
    tracep->declBit(c+814,"sdram_cke_o", false,-1);
    tracep->declBit(c+815,"sdram_cs_o", false,-1);
    tracep->declBit(c+816,"sdram_ras_o", false,-1);
    tracep->declBit(c+817,"sdram_cas_o", false,-1);
    tracep->declBit(c+818,"sdram_we_o", false,-1);
    tracep->declBus(c+821,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+819,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+820,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+844,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+843,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1241,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1242,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1243,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1244,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1244,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1244,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1245,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1246,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1247,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1248,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1249,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1245,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1250,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1251,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1252,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1253,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1254,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1255,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1256,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1216,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1257,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1245,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1216,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1256,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1255,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1251,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1253,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1252,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1254,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1250,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1258,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1259,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1260,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1260,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1261,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1260,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1244,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1244,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1262,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1057,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1093,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1091,"ram_rd_w", false,-1);
    tracep->declBit(c+845,"ram_accept_w", false,-1);
    tracep->declBus(c+1059,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+824,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+823,"ram_ack_w", false,-1);
    tracep->declBit(c+1094,"ram_req_w", false,-1);
    tracep->declBus(c+846,"command_q", false,-1, 3,0);
    tracep->declBus(c+819,"addr_q", false,-1, 12,0);
    tracep->declBus(c+844,"data_q", false,-1, 15,0);
    tracep->declBit(c+847,"data_rd_en_q", false,-1);
    tracep->declBus(c+821,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+814,"cke_q", false,-1);
    tracep->declBus(c+820,"bank_q", false,-1, 1,0);
    tracep->declBus(c+848,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+849,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+822,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+850,"refresh_q", false,-1);
    tracep->declBus(c+851,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+852+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+856,"state_q", false,-1, 3,0);
    tracep->declBus(c+1149,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1150,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+857,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+858,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1095,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1096,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1097,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1245,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+859,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1151,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1263,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+860,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+861,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+862,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+863,"idx", false,-1, 31,0);
    tracep->declBus(c+864,"rd_q", false,-1, 3,0);
    tracep->declBit(c+823,"ack_q", false,-1);
    tracep->declArray(c+865,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+1068,"auto_in_psel", false,-1);
    tracep->declBit(c+1069,"auto_in_penable", false,-1);
    tracep->declBit(c+1058,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1062,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1204,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1059,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+825,"auto_in_pready", false,-1);
    tracep->declBit(c+1205,"auto_in_pslverr", false,-1);
    tracep->declBus(c+826,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+812,"spi_bundle_sck", false,-1);
    tracep->declBus(c+813,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1180,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1181,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1264,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1265,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1266,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBus(c+1098,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1068,"in_psel", false,-1);
    tracep->declBit(c+1069,"in_penable", false,-1);
    tracep->declBus(c+1204,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1058,"in_pwrite", false,-1);
    tracep->declBus(c+1059,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+825,"in_pready", false,-1);
    tracep->declBus(c+826,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1205,"in_pslverr", false,-1);
    tracep->declBit(c+812,"spi_sck", false,-1);
    tracep->declBus(c+813,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1180,"spi_mosi", false,-1);
    tracep->declBit(c+1181,"spi_miso", false,-1);
    tracep->declBit(c+868,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1267,"Tp", false,-1, 31,0);
    tracep->declBit(c+1154,"wb_clk_i", false,-1);
    tracep->declBit(c+1155,"wb_rst_i", false,-1);
    tracep->declBus(c+1099,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1059,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+826,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1060,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1058,"wb_we_i", false,-1);
    tracep->declBit(c+1068,"wb_stb_i", false,-1);
    tracep->declBit(c+1069,"wb_cyc_i", false,-1);
    tracep->declBit(c+825,"wb_ack_o", false,-1);
    tracep->declBit(c+1205,"wb_err_o", false,-1);
    tracep->declBit(c+868,"wb_int_o", false,-1);
    tracep->declBus(c+813,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+812,"sclk_pad_o", false,-1);
    tracep->declBit(c+1180,"mosi_pad_o", false,-1);
    tracep->declBit(c+1181,"miso_pad_i", false,-1);
    tracep->declBus(c+869,"divider", false,-1, 15,0);
    tracep->declBus(c+870,"ctrl", false,-1, 13,0);
    tracep->declBus(c+871,"ss", false,-1, 7,0);
    tracep->declBus(c+1152,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+872,"rx", false,-1, 127,0);
    tracep->declBit(c+876,"rx_negedge", false,-1);
    tracep->declBit(c+877,"tx_negedge", false,-1);
    tracep->declBus(c+878,"char_len", false,-1, 6,0);
    tracep->declBit(c+879,"go", false,-1);
    tracep->declBit(c+880,"lsb", false,-1);
    tracep->declBit(c+881,"ie", false,-1);
    tracep->declBit(c+882,"ass", false,-1);
    tracep->declBit(c+1100,"spi_divider_sel", false,-1);
    tracep->declBit(c+1101,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1102,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1103,"spi_ss_sel", false,-1);
    tracep->declBit(c+883,"tip", false,-1);
    tracep->declBit(c+884,"pos_edge", false,-1);
    tracep->declBit(c+885,"neg_edge", false,-1);
    tracep->declBit(c+886,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1267,"Tp", false,-1, 31,0);
    tracep->declBit(c+1154,"clk_in", false,-1);
    tracep->declBit(c+1155,"rst", false,-1);
    tracep->declBit(c+883,"enable", false,-1);
    tracep->declBit(c+879,"go", false,-1);
    tracep->declBit(c+886,"last_clk", false,-1);
    tracep->declBus(c+869,"divider", false,-1, 15,0);
    tracep->declBit(c+812,"clk_out", false,-1);
    tracep->declBit(c+884,"pos_edge", false,-1);
    tracep->declBit(c+885,"neg_edge", false,-1);
    tracep->declBus(c+887,"cnt", false,-1, 15,0);
    tracep->declBit(c+888,"cnt_zero", false,-1);
    tracep->declBit(c+889,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1267,"Tp", false,-1, 31,0);
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1155,"rst", false,-1);
    tracep->declBus(c+1104,"latch", false,-1, 3,0);
    tracep->declBus(c+1060,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+878,"len", false,-1, 6,0);
    tracep->declBit(c+880,"lsb", false,-1);
    tracep->declBit(c+879,"go", false,-1);
    tracep->declBit(c+884,"pos_edge", false,-1);
    tracep->declBit(c+885,"neg_edge", false,-1);
    tracep->declBit(c+876,"rx_negedge", false,-1);
    tracep->declBit(c+877,"tx_negedge", false,-1);
    tracep->declBit(c+883,"tip", false,-1);
    tracep->declBit(c+886,"last", false,-1);
    tracep->declBus(c+1059,"p_in", false,-1, 31,0);
    tracep->declArray(c+872,"p_out", false,-1, 127,0);
    tracep->declBit(c+812,"s_clk", false,-1);
    tracep->declBit(c+1181,"s_in", false,-1);
    tracep->declBit(c+1180,"s_out", false,-1);
    tracep->declBus(c+890,"cnt", false,-1, 7,0);
    tracep->declArray(c+872,"data", false,-1, 127,0);
    tracep->declBus(c+891,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+892,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+893,"rx_clk", false,-1);
    tracep->declBit(c+894,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+1065,"auto_in_psel", false,-1);
    tracep->declBit(c+1066,"auto_in_penable", false,-1);
    tracep->declBit(c+1058,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1063,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1204,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1059,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1067,"auto_in_pready", false,-1);
    tracep->declBit(c+1205,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1186,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1174,"uart_rx", false,-1);
    tracep->declBit(c+1175,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1065,"in_psel", false,-1);
    tracep->declBit(c+1066,"in_penable", false,-1);
    tracep->declBus(c+1204,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1067,"in_pready", false,-1);
    tracep->declBit(c+1205,"in_pslverr", false,-1);
    tracep->declBus(c+1079,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1058,"in_pwrite", false,-1);
    tracep->declBus(c+1186,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1059,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1174,"uart_rx", false,-1);
    tracep->declBit(c+1175,"uart_tx", false,-1);
    tracep->declBit(c+895,"rtsn", false,-1);
    tracep->declBit(c+1205,"ctsn", false,-1);
    tracep->declBit(c+896,"dtr_pad_o", false,-1);
    tracep->declBit(c+1205,"dsr_pad_i", false,-1);
    tracep->declBit(c+1205,"ri_pad_i", false,-1);
    tracep->declBit(c+1205,"dcd_pad_i", false,-1);
    tracep->declBit(c+897,"interrupt", false,-1);
    tracep->declBit(c+1196,"reg_we", false,-1);
    tracep->declBit(c+1197,"reg_re", false,-1);
    tracep->declBus(c+1105,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1106,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+701,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1153,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+898,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1155,"wb_rst_i", false,-1);
    tracep->declBus(c+1105,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1107,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1153,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1196,"wb_we_i", false,-1);
    tracep->declBit(c+1197,"wb_re_i", false,-1);
    tracep->declBit(c+1175,"stx_pad_o", false,-1);
    tracep->declBit(c+1174,"srx_pad_i", false,-1);
    tracep->declBus(c+1258,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+898,"rts_pad_o", false,-1);
    tracep->declBit(c+896,"dtr_pad_o", false,-1);
    tracep->declBit(c+897,"int_o", false,-1);
    tracep->declBit(c+899,"enable", false,-1);
    tracep->declBit(c+900,"srx_pad", false,-1);
    tracep->declBus(c+901,"ier", false,-1, 3,0);
    tracep->declBus(c+902,"iir", false,-1, 3,0);
    tracep->declBus(c+903,"fcr", false,-1, 1,0);
    tracep->declBus(c+904,"mcr", false,-1, 4,0);
    tracep->declBus(c+905,"lcr", false,-1, 7,0);
    tracep->declBus(c+906,"msr", false,-1, 7,0);
    tracep->declBus(c+907,"dl", false,-1, 15,0);
    tracep->declBus(c+908,"scratch", false,-1, 7,0);
    tracep->declBit(c+909,"start_dlc", false,-1);
    tracep->declBit(c+910,"lsr_mask_d", false,-1);
    tracep->declBit(c+911,"msi_reset", false,-1);
    tracep->declBus(c+912,"dlc", false,-1, 15,0);
    tracep->declBus(c+913,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+914,"rx_reset", false,-1);
    tracep->declBit(c+915,"tx_reset", false,-1);
    tracep->declBit(c+916,"dlab", false,-1);
    tracep->declBit(c+1215,"cts_pad_i", false,-1);
    tracep->declBit(c+1205,"dsr_pad_i", false,-1);
    tracep->declBit(c+1205,"ri_pad_i", false,-1);
    tracep->declBit(c+1205,"dcd_pad_i", false,-1);
    tracep->declBit(c+917,"loopback", false,-1);
    tracep->declBit(c+1205,"cts", false,-1);
    tracep->declBit(c+1215,"dsr", false,-1);
    tracep->declBit(c+1215,"ri", false,-1);
    tracep->declBit(c+1215,"dcd", false,-1);
    tracep->declBit(c+918,"cts_c", false,-1);
    tracep->declBit(c+919,"dsr_c", false,-1);
    tracep->declBit(c+920,"ri_c", false,-1);
    tracep->declBit(c+921,"dcd_c", false,-1);
    tracep->declBus(c+922,"lsr", false,-1, 7,0);
    tracep->declBit(c+923,"lsr0", false,-1);
    tracep->declBit(c+924,"lsr1", false,-1);
    tracep->declBit(c+925,"lsr2", false,-1);
    tracep->declBit(c+926,"lsr3", false,-1);
    tracep->declBit(c+927,"lsr4", false,-1);
    tracep->declBit(c+928,"lsr5", false,-1);
    tracep->declBit(c+929,"lsr6", false,-1);
    tracep->declBit(c+930,"lsr7", false,-1);
    tracep->declBit(c+931,"lsr0r", false,-1);
    tracep->declBit(c+932,"lsr1r", false,-1);
    tracep->declBit(c+933,"lsr2r", false,-1);
    tracep->declBit(c+934,"lsr3r", false,-1);
    tracep->declBit(c+935,"lsr4r", false,-1);
    tracep->declBit(c+936,"lsr5r", false,-1);
    tracep->declBit(c+937,"lsr6r", false,-1);
    tracep->declBit(c+938,"lsr7r", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+939,"rls_int", false,-1);
    tracep->declBit(c+940,"rda_int", false,-1);
    tracep->declBit(c+941,"ti_int", false,-1);
    tracep->declBit(c+942,"thre_int", false,-1);
    tracep->declBit(c+943,"ms_int", false,-1);
    tracep->declBit(c+944,"tf_push", false,-1);
    tracep->declBit(c+945,"rf_pop", false,-1);
    tracep->declBus(c+1198,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+946,"rf_error_bit", false,-1);
    tracep->declBit(c+924,"rf_overrun", false,-1);
    tracep->declBit(c+947,"rf_push_pulse", false,-1);
    tracep->declBus(c+948,"rf_count", false,-1, 4,0);
    tracep->declBus(c+949,"tf_count", false,-1, 4,0);
    tracep->declBus(c+950,"tstate", false,-1, 2,0);
    tracep->declBus(c+951,"rstate", false,-1, 3,0);
    tracep->declBus(c+952,"counter_t", false,-1, 9,0);
    tracep->declBit(c+953,"thre_set_en", false,-1);
    tracep->declBus(c+954,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+955,"block_value", false,-1, 7,0);
    tracep->declBit(c+956,"serial_out", false,-1);
    tracep->declBit(c+957,"serial_in", false,-1);
    tracep->declBit(c+3,"lsr_mask_condition", false,-1);
    tracep->declBit(c+4,"iir_read", false,-1);
    tracep->declBit(c+5,"msr_read", false,-1);
    tracep->declBit(c+6,"fifo_read", false,-1);
    tracep->declBit(c+7,"fifo_write", false,-1);
    tracep->declBus(c+958,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+959,"lsr0_d", false,-1);
    tracep->declBit(c+960,"lsr1_d", false,-1);
    tracep->declBit(c+961,"lsr2_d", false,-1);
    tracep->declBit(c+962,"lsr3_d", false,-1);
    tracep->declBit(c+963,"lsr4_d", false,-1);
    tracep->declBit(c+964,"lsr5_d", false,-1);
    tracep->declBit(c+965,"lsr6_d", false,-1);
    tracep->declBit(c+966,"lsr7_d", false,-1);
    tracep->declBit(c+967,"rls_int_d", false,-1);
    tracep->declBit(c+968,"thre_int_d", false,-1);
    tracep->declBit(c+969,"ms_int_d", false,-1);
    tracep->declBit(c+970,"ti_int_d", false,-1);
    tracep->declBit(c+971,"rda_int_d", false,-1);
    tracep->declBit(c+972,"rls_int_rise", false,-1);
    tracep->declBit(c+973,"thre_int_rise", false,-1);
    tracep->declBit(c+974,"ms_int_rise", false,-1);
    tracep->declBit(c+975,"ti_int_rise", false,-1);
    tracep->declBit(c+976,"rda_int_rise", false,-1);
    tracep->declBit(c+977,"rls_int_pnd", false,-1);
    tracep->declBit(c+978,"rda_int_pnd", false,-1);
    tracep->declBit(c+979,"thre_int_pnd", false,-1);
    tracep->declBit(c+980,"ms_int_pnd", false,-1);
    tracep->declBit(c+981,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1267,"Tp", false,-1, 31,0);
    tracep->declBus(c+1267,"width", false,-1, 31,0);
    tracep->declBus(c+1236,"init_value", false,-1, 0,0);
    tracep->declBit(c+1155,"rst_i", false,-1);
    tracep->declBit(c+1154,"clk_i", false,-1);
    tracep->declBit(c+1205,"stage1_rst_i", false,-1);
    tracep->declBit(c+1215,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1174,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+900,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+982,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1155,"wb_rst_i", false,-1);
    tracep->declBus(c+905,"lcr", false,-1, 7,0);
    tracep->declBit(c+945,"rf_pop", false,-1);
    tracep->declBit(c+957,"srx_pad_i", false,-1);
    tracep->declBit(c+899,"enable", false,-1);
    tracep->declBit(c+914,"rx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBus(c+952,"counter_t", false,-1, 9,0);
    tracep->declBus(c+948,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1198,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+924,"rf_overrun", false,-1);
    tracep->declBit(c+946,"rf_error_bit", false,-1);
    tracep->declBus(c+951,"rstate", false,-1, 3,0);
    tracep->declBit(c+947,"rf_push_pulse", false,-1);
    tracep->declBus(c+983,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+984,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+985,"rshift", false,-1, 7,0);
    tracep->declBit(c+986,"rparity", false,-1);
    tracep->declBit(c+987,"rparity_error", false,-1);
    tracep->declBit(c+988,"rframing_error", false,-1);
    tracep->declBit(c+989,"rbit_in", false,-1);
    tracep->declBit(c+990,"rparity_xor", false,-1);
    tracep->declBus(c+991,"counter_b", false,-1, 7,0);
    tracep->declBit(c+992,"rf_push_q", false,-1);
    tracep->declBus(c+993,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+994,"rf_push", false,-1);
    tracep->declBit(c+995,"break_error", false,-1);
    tracep->declBit(c+996,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+997,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+998,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+999,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1216,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1256,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1255,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1251,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1253,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1252,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1254,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1250,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1258,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1259,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1268,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1000,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1001,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1269,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1261,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1245,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1270,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1155,"wb_rst_i", false,-1);
    tracep->declBit(c+947,"push", false,-1);
    tracep->declBit(c+945,"pop", false,-1);
    tracep->declBus(c+993,"data_in", false,-1, 10,0);
    tracep->declBit(c+914,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+1198,"data_out", false,-1, 10,0);
    tracep->declBit(c+924,"overrun", false,-1);
    tracep->declBus(c+948,"count", false,-1, 4,0);
    tracep->declBit(c+946,"error_bit", false,-1);
    tracep->declBus(c+1199,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1002+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1018,"top", false,-1, 3,0);
    tracep->declBus(c+1019,"bottom", false,-1, 3,0);
    tracep->declBus(c+1020,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1021,"word0", false,-1, 2,0);
    tracep->declBus(c+1022,"word1", false,-1, 2,0);
    tracep->declBus(c+1023,"word2", false,-1, 2,0);
    tracep->declBus(c+1024,"word3", false,-1, 2,0);
    tracep->declBus(c+1025,"word4", false,-1, 2,0);
    tracep->declBus(c+1026,"word5", false,-1, 2,0);
    tracep->declBus(c+1027,"word6", false,-1, 2,0);
    tracep->declBus(c+1028,"word7", false,-1, 2,0);
    tracep->declBus(c+1029,"word8", false,-1, 2,0);
    tracep->declBus(c+1030,"word9", false,-1, 2,0);
    tracep->declBus(c+1031,"word10", false,-1, 2,0);
    tracep->declBus(c+1032,"word11", false,-1, 2,0);
    tracep->declBus(c+1033,"word12", false,-1, 2,0);
    tracep->declBus(c+1034,"word13", false,-1, 2,0);
    tracep->declBus(c+1035,"word14", false,-1, 2,0);
    tracep->declBus(c+1036,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1245,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1266,"data_width", false,-1, 31,0);
    tracep->declBus(c+1261,"depth", false,-1, 31,0);
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+947,"we", false,-1);
    tracep->declBus(c+1018,"a", false,-1, 3,0);
    tracep->declBus(c+1019,"dpra", false,-1, 3,0);
    tracep->declBus(c+1037,"di", false,-1, 7,0);
    tracep->declBus(c+1199,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+702+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1155,"wb_rst_i", false,-1);
    tracep->declBus(c+905,"lcr", false,-1, 7,0);
    tracep->declBit(c+944,"tf_push", false,-1);
    tracep->declBus(c+1107,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+899,"enable", false,-1);
    tracep->declBit(c+915,"tx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+956,"stx_pad_o", false,-1);
    tracep->declBus(c+950,"tstate", false,-1, 2,0);
    tracep->declBus(c+949,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1038,"counter", false,-1, 4,0);
    tracep->declBus(c+1039,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1040,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1041,"stx_o_tmp", false,-1);
    tracep->declBit(c+1042,"parity_xor", false,-1);
    tracep->declBit(c+1043,"tf_pop", false,-1);
    tracep->declBit(c+1044,"bit_out", false,-1);
    tracep->declBus(c+1107,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1200,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1045,"tf_overrun", false,-1);
    tracep->declBus(c+1220,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1204,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1271,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1272,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1237,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1273,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1266,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1261,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1245,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1270,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+1155,"wb_rst_i", false,-1);
    tracep->declBit(c+944,"push", false,-1);
    tracep->declBit(c+1043,"pop", false,-1);
    tracep->declBus(c+1107,"data_in", false,-1, 7,0);
    tracep->declBit(c+915,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+1200,"data_out", false,-1, 7,0);
    tracep->declBit(c+1045,"overrun", false,-1);
    tracep->declBus(c+949,"count", false,-1, 4,0);
    tracep->declBus(c+1046,"top", false,-1, 3,0);
    tracep->declBus(c+1047,"bottom", false,-1, 3,0);
    tracep->declBus(c+1048,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1245,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1266,"data_width", false,-1, 31,0);
    tracep->declBus(c+1261,"depth", false,-1, 31,0);
    tracep->declBit(c+1154,"clk", false,-1);
    tracep->declBit(c+944,"we", false,-1);
    tracep->declBus(c+1046,"a", false,-1, 3,0);
    tracep->declBus(c+1047,"dpra", false,-1, 3,0);
    tracep->declBus(c+1107,"di", false,-1, 7,0);
    tracep->declBus(c+1200,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+718+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBit(c+736,"auto_in_psel", false,-1);
    tracep->declBit(c+737,"auto_in_penable", false,-1);
    tracep->declBit(c+1058,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1062,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1204,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1059,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1206,"auto_in_pready", false,-1);
    tracep->declBit(c+1207,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1208,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1168,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1169,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1170,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1171,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1172,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1173,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1154,"clock", false,-1);
    tracep->declBit(c+1155,"reset", false,-1);
    tracep->declBus(c+1098,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+736,"in_psel", false,-1);
    tracep->declBit(c+737,"in_penable", false,-1);
    tracep->declBus(c+1204,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1058,"in_pwrite", false,-1);
    tracep->declBus(c+1059,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1060,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1206,"in_pready", false,-1);
    tracep->declBus(c+1208,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1207,"in_pslverr", false,-1);
    tracep->declBus(c+1168,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1169,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1170,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1171,"vga_hsync", false,-1);
    tracep->declBit(c+1172,"vga_vsync", false,-1);
    tracep->declBit(c+1173,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+812,"sck", false,-1);
    tracep->declBit(c+1049,"ss", false,-1);
    tracep->declBit(c+1180,"mosi", false,-1);
    tracep->declBit(c+1215,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+812,"sck", false,-1);
    tracep->declBit(c+1050,"ss", false,-1);
    tracep->declBit(c+1180,"mosi", false,-1);
    tracep->declBit(c+1181,"miso", false,-1);
    tracep->declBit(c+1050,"reset", false,-1);
    tracep->declBus(c+1051,"state", false,-1, 2,0);
    tracep->declBus(c+1052,"counter", false,-1, 7,0);
    tracep->declBus(c+1053,"cmd", false,-1, 7,0);
    tracep->declBus(c+1054,"addr", false,-1, 23,0);
    tracep->declBus(c+1055,"data", false,-1, 31,0);
    tracep->declBit(c+1056,"ren", false,-1);
    tracep->declBus(c+1201,"rdata", false,-1, 31,0);
    tracep->declBus(c+1202,"raddr", false,-1, 31,0);
    tracep->declBus(c+1203,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+812,"clock", false,-1);
    tracep->declBit(c+1056,"valid", false,-1);
    tracep->declBus(c+1053,"cmd", false,-1, 7,0);
    tracep->declBus(c+1202,"addr", false,-1, 31,0);
    tracep->declBus(c+1201,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1182,"sck", false,-1);
    tracep->declBit(c+1183,"ce_n", false,-1);
    tracep->declBus(c+1133,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1184,"clk", false,-1);
    tracep->declBit(c+814,"cke", false,-1);
    tracep->declBit(c+815,"cs", false,-1);
    tracep->declBit(c+816,"ras", false,-1);
    tracep->declBit(c+817,"cas", false,-1);
    tracep->declBit(c+818,"we", false,-1);
    tracep->declBus(c+819,"a", false,-1, 12,0);
    tracep->declBus(c+820,"ba", false,-1, 1,0);
    tracep->declBus(c+821,"dqm", false,-1, 1,0);
    tracep->declBus(c+822,"dq", false,-1, 15,0);
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
    bufp->fullBit(oldp+39,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+44,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+45,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+48,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+49,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+50,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                      >> 2U))),4);
    bufp->fullCData(oldp+51,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+52,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+53,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+58,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+59,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x23U)))),4);
    bufp->fullIData(oldp+60,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                      >> 3U))),32);
    bufp->fullCData(oldp+61,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 1U)))),2);
    bufp->fullBit(oldp+62,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+95,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                             << 0xbU) 
                                            | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+111,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+127,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullQData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+134,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_o_io_master_awvalid));
    bufp->fullIData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_o_io_master_awaddr),32);
    bufp->fullCData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_o_io_master_awsize),3);
    bufp->fullBit(oldp+138,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_o_io_master_wvalid));
    bufp->fullIData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_o_io_master_wdata),32);
    bufp->fullCData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_o_io_master_wstrb),4);
    bufp->fullBit(oldp+142,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+144,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+145,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_o_io_master_arvalid));
    bufp->fullIData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_axi4_mem__DOT__araddr),32);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_axi4_mem__DOT__arsize),3);
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullCData(oldp+152,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+153,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+155,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+161,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+162,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+164,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullQData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+207,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)))));
    bufp->fullQData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+212,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+213,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+216,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+217,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+218,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+221,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+222,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+223,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullSData(oldp+231,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullIData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullSData(oldp+233,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+236,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+237,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+238,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+239,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+240,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+248,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+250,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+251,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+252,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+253,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+317,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+330,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+334,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+338,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+342,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+346,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+350,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+354,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+358,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+362,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+366,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+370,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+374,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+378,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+382,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+386,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+390,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+394,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+398,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+402,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+406,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+410,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+414,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+418,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+422,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+426,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+430,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+434,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+438,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+442,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+446,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+450,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+454,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__select_pc_o_pc),32);
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_instr),32);
    bufp->fullIData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regF_o_pc),32);
    bufp->fullIData(oldp+461,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regF_o_pc)),32);
    bufp->fullIData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_o_instr),32);
    bufp->fullIData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_pc),32);
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_pre_pc),32);
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_commit));
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr),32);
    bufp->fullIData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valA),32);
    bufp->fullIData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_valB),32);
    bufp->fullIData(oldp+469,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_csrrs) 
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
    bufp->fullCData(oldp+470,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_heebf2418__0) 
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
    bufp->fullCData(oldp+471,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)) 
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
    bufp->fullCData(oldp+472,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_hc3ee9fa0__0) 
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
    bufp->fullCData(oldp+473,(((0xa023U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)
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
    bufp->fullCData(oldp+474,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_heebf2418__0)
                                ? 0U : (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                 >> 7U)))),5);
    bufp->fullCData(oldp+475,((((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)) 
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
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_rs1),5);
    bufp->fullSData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_rs2),12);
    bufp->fullCData(oldp+478,(((0x73U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)
                                ? 0U : ((0x30200073U 
                                         == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)
                                         ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_csrrs)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_csrrw)
                                                   ? 3U
                                                   : 4U))))),3);
    bufp->fullSData(oldp+479,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+480,((0x73U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)));
    bufp->fullBit(oldp+481,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_h917f3f8b__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_h5893b836__0))));
    bufp->fullBit(oldp+482,((((IData)((0x63U == (0x707fU 
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
    bufp->fullBit(oldp+483,((0x30200073U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)));
    bufp->fullBit(oldp+484,((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullIData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_valA),32);
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_valB),32);
    bufp->fullIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_imm),32);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_alu_valA_sel),2);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_alu_valB_sel),2);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_alu_func_sel),4);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw),4);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_wb_rd),5);
    bufp->fullSData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_wb_csr_rd),12);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_wb_valD_sel),2);
    bufp->fullIData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_pc),32);
    bufp->fullIData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_instr),32);
    bufp->fullIData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_pre_pc),32);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_wb_csr_sel),3);
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_is_jalr));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_need_jump));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_wb_reg_wen));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_commit));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_is_ecall));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_is_mret));
    bufp->fullIData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__execute_o_pre_pc),32);
    bufp->fullIData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__execute_o_valE),32);
    bufp->fullIData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_valE),32);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw),4);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_wb_rd),5);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_wb_valD_sel),2);
    bufp->fullIData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_instr),32);
    bufp->fullIData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_pc),32);
    bufp->fullIData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_pre_pc),32);
    bufp->fullIData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_valB),32);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_wb_csr_sel),3);
    bufp->fullSData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_wb_csr_rd),12);
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_commit));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_wb_reg_wen));
    bufp->fullIData(oldp+519,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))
                                ? (((- (IData)((1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_memory__DOT__read_mem_data 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_memory__DOT__read_mem_data))
                                : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_memory__DOT__read_mem_data 
                                                       >> 0xfU)))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_memory__DOT__read_mem_data))
                                    : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_memory__DOT__read_mem_data
                                        : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))
                                            ? (0xffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_memory__DOT__read_mem_data)
                                            : ((3U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))
                                                ? (0xffffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_memory__DOT__read_mem_data)
                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_memory__DOT__read_mem_data)))))),32);
    bufp->fullCData(oldp+520,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))
                                ? 0U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))
                                         ? 0U : ((2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))
                                                   ? 1U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))
                                                    ? 2U
                                                    : 0U)))))),3);
    bufp->fullIData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_axi4_mem__DOT__rdata),32);
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_wb_rd),5);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_wb_valD_sel),2);
    bufp->fullIData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_valE),32);
    bufp->fullIData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_pc),32);
    bufp->fullIData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_pre_pc),32);
    bufp->fullIData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_valM),32);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_wb_csr_sel),3);
    bufp->fullSData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_wb_csr_rd),12);
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_commit));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_wb_reg_wen));
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw),4);
    bufp->fullIData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__write_back_o_wb_valD),32);
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_o_regF_stall));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_o_regE_stall));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_o_regE_bubble));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_stall));
    bufp->fullBit(oldp+538,((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+539,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+540,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+541,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+542,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+543,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+544,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw)) 
                             | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw)) 
                                | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw)) 
                                   | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw)) 
                                      | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))))))));
    bufp->fullCData(oldp+545,((0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__decode_o_rs2))),5);
    bufp->fullBit(oldp+546,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw))));
    bufp->fullBit(oldp+547,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw))));
    bufp->fullBit(oldp+548,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw))));
    bufp->fullBit(oldp+549,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw))));
    bufp->fullBit(oldp+550,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw))));
    bufp->fullBit(oldp+551,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw)) 
                             | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw)) 
                                | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw)) 
                                   | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw)) 
                                      | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw))))))));
    bufp->fullBit(oldp+552,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw))));
    bufp->fullBit(oldp+553,((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw))));
    bufp->fullBit(oldp+554,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw))));
    bufp->fullBit(oldp+555,(((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw)) 
                             | ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw)) 
                                | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw))))));
    bufp->fullBit(oldp+556,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+557,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+558,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+559,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+560,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+561,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw)) 
                             | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw)) 
                                | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw)) 
                                   | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw)) 
                                      | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))))))));
    bufp->fullBit(oldp+562,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+563,((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+564,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))));
    bufp->fullBit(oldp+565,(((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw)) 
                             | ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw)) 
                                | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_mem_rw))))));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ctrl__DOT__load_use));
    bufp->fullBit(oldp+567,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw)) 
                                | ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw)) 
                                   | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regW_o_mem_rw)))))));
    bufp->fullCData(oldp+568,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)),7);
    bufp->fullCData(oldp+569,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                        >> 7U))),5);
    bufp->fullCData(oldp+570,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+571,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+572,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+573,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+574,((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+575,((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+576,((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+577,((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+578,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+579,((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+580,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+581,((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+582,((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr))));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__opcode_U_TYPE));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_TYPE));
    bufp->fullBit(oldp+585,((0U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+586,((1U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+587,((2U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+588,((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+589,((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+590,((5U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+591,((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+592,((7U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+593,((0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+594,((0x20U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+595,((IData)((0x13U == (0x707fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_slli));
    bufp->fullBit(oldp+597,((IData)((0x2013U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+598,((IData)((0x3013U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+599,((IData)((0x4013U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_srli));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_srai));
    bufp->fullBit(oldp+602,((IData)((0x6013U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+603,((IData)((0x7013U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+604,((IData)((3U == (0x707fU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+605,((IData)((0x1003U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+606,((IData)((0x2003U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+607,((IData)((0x4003U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+608,((IData)((0x5003U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_csrrw));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__rv32I_I_csrrs));
    bufp->fullBit(oldp+611,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_hc3ee9fa0__0) 
                             & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+612,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_hc3ee9fa0__0) 
                             & (0x20U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+613,(((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_h765e0868__0))));
    bufp->fullBit(oldp+614,((IData)((0x2033U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+615,((IData)((0x3033U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+616,((IData)((0x4033U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+617,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_hbbb9c7a8__0) 
                             & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+618,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT____VdfgTmp_hbbb9c7a8__0) 
                             & (0x20U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+619,((IData)((0x6033U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+620,((IData)((0x7033U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+621,((IData)((0x63U == (0x707fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+622,((IData)((0x1063U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+623,((IData)((0x4063U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+624,((IData)((0x5063U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+625,((IData)((0x6063U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+626,((IData)((0x7063U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+627,((IData)((0x23U == (0x707fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+628,((IData)((0x1023U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullBit(oldp+629,((IData)((0x2023U == (0x707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)))));
    bufp->fullIData(oldp+630,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr)),32);
    bufp->fullIData(oldp+631,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+632,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                        >> 0x14U))),32);
    bufp->fullIData(oldp+633,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+634,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
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
    bufp->fullIData(oldp+635,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_instr 
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
    bufp->fullIData(oldp+636,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__regfile_i_rs1))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__regfile_i_rs1])),32);
    bufp->fullIData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__regfile_o_valB),32);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__regfile_i_rs1),5);
    bufp->fullSData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__regfile_i_rs2),12);
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__soc));
    bufp->fullIData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[0]),32);
    bufp->fullIData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[1]),32);
    bufp->fullIData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[2]),32);
    bufp->fullIData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[3]),32);
    bufp->fullIData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[4]),32);
    bufp->fullIData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[5]),32);
    bufp->fullIData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[6]),32);
    bufp->fullIData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[7]),32);
    bufp->fullIData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[8]),32);
    bufp->fullIData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[9]),32);
    bufp->fullIData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[10]),32);
    bufp->fullIData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[11]),32);
    bufp->fullIData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[12]),32);
    bufp->fullIData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[13]),32);
    bufp->fullIData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[14]),32);
    bufp->fullIData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[15]),32);
    bufp->fullIData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[16]),32);
    bufp->fullIData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[17]),32);
    bufp->fullIData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[18]),32);
    bufp->fullIData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[19]),32);
    bufp->fullIData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[20]),32);
    bufp->fullIData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[21]),32);
    bufp->fullIData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[22]),32);
    bufp->fullIData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[23]),32);
    bufp->fullIData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[24]),32);
    bufp->fullIData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[25]),32);
    bufp->fullIData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[26]),32);
    bufp->fullIData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[27]),32);
    bufp->fullIData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[28]),32);
    bufp->fullIData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[29]),32);
    bufp->fullIData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[30]),32);
    bufp->fullIData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__regfile[31]),32);
    bufp->fullIData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__mstatus),32);
    bufp->fullIData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__mtvec),32);
    bufp->fullIData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__mcause),32);
    bufp->fullIData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decode__DOT__u_regfile__DOT__mepc),32);
    bufp->fullIData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_execute__DOT__alu_valA),32);
    bufp->fullIData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_execute__DOT__alu_valB),32);
    bufp->fullIData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_memory__DOT__read_mem_data),32);
    bufp->fullBit(oldp+680,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+681,((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+682,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_mem_rw))));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+693,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+734,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+735,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+736,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+737,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+738,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+739,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+740,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+741,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+742,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+743,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullBit(oldp+744,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+745,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullBit(oldp+746,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+747,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+748,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+749,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+750,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+751,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+752,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+753,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+754,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+755,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+756,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+757,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+758,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+759,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+760,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+761,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+762,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+763,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+764,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+765,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+766,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+767,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+768,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+769,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+770,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+771,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+772,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+773,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+774,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+775,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+776,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+777,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+778,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+779,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+780,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+781,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+782,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+783,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+784,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+785,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+786,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+787,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+788,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+789,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+790,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+791,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+792,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+793,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+794,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+795,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+796,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+797,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+798,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+799,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+800,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+801,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+802,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+803,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+804,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+805,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+806,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+807,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+808,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+809,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+810,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+811,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+815,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+816,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+817,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+818,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+822,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+824,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+829,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+830,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+833,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+834,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+839,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+843,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+845,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+876,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+877,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+878,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+879,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+880,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+881,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+882,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+886,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+888,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+889,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+891,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+895,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+896,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+898,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+916,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+917,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+918,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+919,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+920,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+921,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+922,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+925,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+926,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+927,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+946,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+953,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+972,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+973,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+974,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+975,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+976,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+995,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+996,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+997,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+998,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+999,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1001,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1020,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1037,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1048,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1049,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1056,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+1062,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullIData(oldp+1063,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1067,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+1078,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullIData(oldp+1079,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1085,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1086,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1087,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1088,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1089,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+1090,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w));
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1095,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1096,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1097,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1098,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1099,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),5);
    bufp->fullBit(oldp+1100,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullBit(oldp+1101,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+1102,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+1103,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1105,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullCData(oldp+1133,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                   | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1154,(vlSelf->clock));
    bufp->fullBit(oldp+1155,(vlSelf->reset));
    bufp->fullSData(oldp+1156,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1157,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1158,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1159,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1160,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1161,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1162,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1163,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1164,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1165,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1166,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1167,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1168,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1169,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1170,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1171,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1172,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1173,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1174,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1175,(vlSelf->externalPins_uart_tx));
    bufp->fullIData(oldp+1176,(vlSelf->cur_pc),32);
    bufp->fullBit(oldp+1177,(vlSelf->commit));
    bufp->fullIData(oldp+1178,(vlSelf->commit_pc),32);
    bufp->fullIData(oldp+1179,(vlSelf->commit_pre_pc),32);
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1181,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1182,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1183,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1184,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1185,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1186,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1187,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullQData(oldp+1188,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1190,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rst__DOT__rst_n_r2) 
                                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
                                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))))));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rst__DOT__rst_n_r2));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rst__DOT__rst_n_r1));
    bufp->fullBit(oldp+1194,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1195,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1198,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1202,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1204,(1U),3);
    bufp->fullBit(oldp+1205,(0U));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1215,(1U));
    bufp->fullCData(oldp+1216,(0U),4);
    bufp->fullCData(oldp+1217,(0U),8);
    bufp->fullCData(oldp+1218,(0U),2);
    bufp->fullIData(oldp+1219,(0U),32);
    bufp->fullCData(oldp+1220,(0U),3);
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regF_o_io_master_awready));
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regF_o_io_master_wready));
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regF_o_io_master_bvalid));
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_io_master_awready));
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_io_master_wready));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regD_o_io_master_bvalid));
    bufp->fullSData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_i_wb_csr_rd),12);
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_io_master_awready));
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_io_master_wready));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regE_o_io_master_bvalid));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__execute_o_is_jalr));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_io_master_awready));
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_io_master_wready));
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regM_o_io_master_bvalid));
    bufp->fullBit(oldp+1235,(0U));
    bufp->fullBit(oldp+1236,(1U));
    bufp->fullCData(oldp+1237,(4U),3);
    bufp->fullCData(oldp+1238,(0x1bU),8);
    bufp->fullCData(oldp+1239,(0xebU),8);
    bufp->fullCData(oldp+1240,(0x38U),8);
    bufp->fullIData(oldp+1241,(0x64U),32);
    bufp->fullIData(oldp+1242,(0x18U),32);
    bufp->fullIData(oldp+1243,(9U),32);
    bufp->fullIData(oldp+1244,(2U),32);
    bufp->fullIData(oldp+1245,(4U),32);
    bufp->fullIData(oldp+1246,(0xdU),32);
    bufp->fullIData(oldp+1247,(0x2000U),32);
    bufp->fullIData(oldp+1248,(0x2710U),32);
    bufp->fullIData(oldp+1249,(0x30cU),32);
    bufp->fullCData(oldp+1250,(7U),4);
    bufp->fullCData(oldp+1251,(3U),4);
    bufp->fullCData(oldp+1252,(5U),4);
    bufp->fullCData(oldp+1253,(4U),4);
    bufp->fullCData(oldp+1254,(6U),4);
    bufp->fullCData(oldp+1255,(2U),4);
    bufp->fullCData(oldp+1256,(1U),4);
    bufp->fullSData(oldp+1257,(0x21U),13);
    bufp->fullCData(oldp+1258,(8U),4);
    bufp->fullCData(oldp+1259,(9U),4);
    bufp->fullIData(oldp+1260,(0xaU),32);
    bufp->fullIData(oldp+1261,(0x10U),32);
    bufp->fullIData(oldp+1262,(6U),32);
    bufp->fullIData(oldp+1263,(0x11U),32);
    bufp->fullIData(oldp+1264,(0x30000000U),32);
    bufp->fullIData(oldp+1265,(0x3fffffffU),32);
    bufp->fullIData(oldp+1266,(8U),32);
    bufp->fullIData(oldp+1267,(1U),32);
    bufp->fullCData(oldp+1268,(0xaU),4);
    bufp->fullIData(oldp+1269,(0xbU),32);
    bufp->fullIData(oldp+1270,(5U),32);
    bufp->fullCData(oldp+1271,(2U),3);
    bufp->fullCData(oldp+1272,(3U),3);
    bufp->fullCData(oldp+1273,(5U),3);
}
