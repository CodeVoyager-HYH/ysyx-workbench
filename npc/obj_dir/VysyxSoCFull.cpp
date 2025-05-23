// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VysyxSoCFull::VysyxSoCFull(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VysyxSoCFull__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , externalPins_gpio_seg_0{vlSymsp->TOP.externalPins_gpio_seg_0}
    , externalPins_gpio_seg_1{vlSymsp->TOP.externalPins_gpio_seg_1}
    , externalPins_gpio_seg_2{vlSymsp->TOP.externalPins_gpio_seg_2}
    , externalPins_gpio_seg_3{vlSymsp->TOP.externalPins_gpio_seg_3}
    , externalPins_gpio_seg_4{vlSymsp->TOP.externalPins_gpio_seg_4}
    , externalPins_gpio_seg_5{vlSymsp->TOP.externalPins_gpio_seg_5}
    , externalPins_gpio_seg_6{vlSymsp->TOP.externalPins_gpio_seg_6}
    , externalPins_gpio_seg_7{vlSymsp->TOP.externalPins_gpio_seg_7}
    , externalPins_ps2_clk{vlSymsp->TOP.externalPins_ps2_clk}
    , externalPins_ps2_data{vlSymsp->TOP.externalPins_ps2_data}
    , externalPins_vga_r{vlSymsp->TOP.externalPins_vga_r}
    , externalPins_vga_g{vlSymsp->TOP.externalPins_vga_g}
    , externalPins_vga_b{vlSymsp->TOP.externalPins_vga_b}
    , externalPins_vga_hsync{vlSymsp->TOP.externalPins_vga_hsync}
    , externalPins_vga_vsync{vlSymsp->TOP.externalPins_vga_vsync}
    , externalPins_vga_valid{vlSymsp->TOP.externalPins_vga_valid}
    , externalPins_uart_rx{vlSymsp->TOP.externalPins_uart_rx}
    , externalPins_uart_tx{vlSymsp->TOP.externalPins_uart_tx}
    , commit{vlSymsp->TOP.commit}
    , externalPins_gpio_out{vlSymsp->TOP.externalPins_gpio_out}
    , externalPins_gpio_in{vlSymsp->TOP.externalPins_gpio_in}
    , cur_pc{vlSymsp->TOP.cur_pc}
    , commit_pc{vlSymsp->TOP.commit_pc}
    , commit_pre_pc{vlSymsp->TOP.commit_pre_pc}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VysyxSoCFull::VysyxSoCFull(const char* _vcname__)
    : VysyxSoCFull(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VysyxSoCFull::~VysyxSoCFull() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
void VysyxSoCFull___024root___eval_static(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval_initial(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval_settle(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf);

void VysyxSoCFull::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VysyxSoCFull::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VysyxSoCFull___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VysyxSoCFull___024root___eval_static(&(vlSymsp->TOP));
        VysyxSoCFull___024root___eval_initial(&(vlSymsp->TOP));
        VysyxSoCFull___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VysyxSoCFull___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VysyxSoCFull::eventsPending() { return false; }

uint64_t VysyxSoCFull::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VysyxSoCFull::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VysyxSoCFull___024root___eval_final(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull::final() {
    VysyxSoCFull___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VysyxSoCFull::hierName() const { return vlSymsp->name(); }
const char* VysyxSoCFull::modelName() const { return "VysyxSoCFull"; }
unsigned VysyxSoCFull::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VysyxSoCFull::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VysyxSoCFull___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VysyxSoCFull::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VysyxSoCFull::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VysyxSoCFull___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
