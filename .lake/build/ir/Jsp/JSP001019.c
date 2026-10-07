// Lean compiler output
// Module: Jsp.JSP001019
// Imports: Init Init.Data.List.Basic
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_allPairsDiverge___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_List_all___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_allPairsDiverge___spec__3(lean_object*, lean_object*);
static lean_object* l_allPairsDiverge___lambda__1___closed__1;
LEAN_EXPORT uint8_t l_allPairsDiverge___lambda__2(lean_object*, lean_object*, lean_object*);
uint8_t l_List_any___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_divergesAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_allPairsDiverge___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
LEAN_EXPORT uint8_t l_allPairsDiverge___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_allPairsDiverge___closed__1;
LEAN_EXPORT lean_object* l_allPairsDiverge___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_allPairsDiverge___spec__1(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_divergesAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_allPairsDiverge___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT uint8_t l_allPairsDiverge;
LEAN_EXPORT uint8_t l_allPairsDiverge___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_allPairsDiverge___lambda__3___boxed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_allPairsDiverge___lambda__2___closed__1;
LEAN_EXPORT uint8_t l_divergesAt(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_5 = lean_nat_pow(x_1, x_3);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_5, x_6);
lean_dec(x_5);
x_8 = lean_nat_mod(x_7, x_4);
lean_dec(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_nat_pow(x_2, x_3);
x_12 = lean_nat_sub(x_11, x_6);
lean_dec(x_11);
x_13 = lean_nat_mod(x_12, x_4);
lean_dec(x_12);
x_14 = lean_nat_dec_eq(x_13, x_9);
lean_dec(x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_nat_pow(x_2, x_3);
x_16 = lean_nat_sub(x_15, x_6);
lean_dec(x_15);
x_17 = lean_nat_mod(x_16, x_4);
lean_dec(x_16);
x_18 = lean_nat_dec_eq(x_17, x_9);
lean_dec(x_17);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = 1;
return x_19;
}
else
{
uint8_t x_20; 
x_20 = 0;
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_divergesAt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_divergesAt(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_allPairsDiverge___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_unsigned_to_nat(2u);
x_8 = lean_nat_add(x_5, x_7);
lean_dec(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_8);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = lean_unsigned_to_nat(2u);
x_13 = lean_nat_add(x_10, x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_2);
x_1 = x_11;
x_2 = x_14;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_allPairsDiverge___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_1, x_8);
x_10 = lean_nat_add(x_9, x_6);
lean_dec(x_6);
lean_dec(x_9);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_10);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_1, x_14);
x_16 = lean_nat_add(x_15, x_12);
lean_dec(x_12);
lean_dec(x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_3);
x_2 = x_13;
x_3 = x_17;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_allPairsDiverge___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_5, x_7);
lean_dec(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_8);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_10, x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_2);
x_1 = x_11;
x_2 = x_14;
goto _start;
}
}
}
}
static lean_object* _init_l_allPairsDiverge___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(11u);
x_2 = l_List_range(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_allPairsDiverge___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_allPairsDiverge___lambda__1___closed__1;
x_6 = l_List_mapTR_loop___at_allPairsDiverge___spec__1(x_5, x_1);
x_7 = lean_alloc_closure((void*)(l_divergesAt___boxed), 4, 3);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_4);
x_8 = l_List_any___rarg(x_6, x_7);
return x_8;
}
}
static lean_object* _init_l_allPairsDiverge___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_List_range(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_allPairsDiverge___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = l_allPairsDiverge___lambda__2___closed__1;
lean_inc(x_1);
x_5 = l_List_mapTR_loop___at_allPairsDiverge___spec__3(x_4, x_1);
x_6 = lean_alloc_closure((void*)(l_allPairsDiverge___lambda__1___boxed), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
x_7 = l_List_any___rarg(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT uint8_t l_allPairsDiverge___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_unsigned_to_nat(10u);
x_4 = lean_nat_sub(x_3, x_2);
x_5 = l_List_range(x_4);
lean_inc(x_1);
x_6 = l_List_mapTR_loop___at_allPairsDiverge___spec__2(x_2, x_5, x_1);
x_7 = lean_alloc_closure((void*)(l_allPairsDiverge___lambda__2___boxed), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
x_8 = l_List_all___rarg(x_6, x_7);
return x_8;
}
}
static lean_object* _init_l_allPairsDiverge___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(9u);
x_2 = l_List_range(x_1);
return x_2;
}
}
static uint8_t _init_l_allPairsDiverge() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_1 = lean_box(0);
x_2 = l_allPairsDiverge___closed__1;
x_3 = l_List_mapTR_loop___at_allPairsDiverge___spec__1(x_2, x_1);
x_4 = lean_alloc_closure((void*)(l_allPairsDiverge___lambda__3___boxed), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_List_all___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_allPairsDiverge___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapTR_loop___at_allPairsDiverge___spec__2(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_allPairsDiverge___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_allPairsDiverge___lambda__1(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_allPairsDiverge___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_allPairsDiverge___lambda__2(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_allPairsDiverge___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_allPairsDiverge___lambda__3(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_List_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Jsp_JSP001019(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_allPairsDiverge___lambda__1___closed__1 = _init_l_allPairsDiverge___lambda__1___closed__1();
lean_mark_persistent(l_allPairsDiverge___lambda__1___closed__1);
l_allPairsDiverge___lambda__2___closed__1 = _init_l_allPairsDiverge___lambda__2___closed__1();
lean_mark_persistent(l_allPairsDiverge___lambda__2___closed__1);
l_allPairsDiverge___closed__1 = _init_l_allPairsDiverge___closed__1();
lean_mark_persistent(l_allPairsDiverge___closed__1);
l_allPairsDiverge = _init_l_allPairsDiverge();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
