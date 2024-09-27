#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int* __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_phits;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled;

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void) ++__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_phits[id - 1U])
#define __MW_INSTRUM_RECORD_HIT(id) ((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_phits) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(id) : (void) 0)

static unsigned int *__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int *__MW_INSTRUM_ClCC5YL3Lja2hMx7y36oTE_cclib_INIT_FILE(unsigned int decCovId);

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_27 0U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_27() \
  (++__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_27 + __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_curr_combination_idx_27])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_29(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(29U), (__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_curr_combination_idx_27 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(30U), (__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_curr_combination_idx_27 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_29(expr) \
  ((expr) ? \
   ((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(29U), (__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_curr_combination_idx_27 = 1), 1) : 1) : \
   ((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(30U), (__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_curr_combination_idx_27 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_34(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(34U), (__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_curr_combination_idx_27 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(35U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_34(expr) \
  ((expr) ? \
   ((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(34U), (__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_curr_combination_idx_27 += 1), 1) : 1) : \
   ((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(35U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_27(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(27U), __MW_INSTRUM_RECORD_COMBINATION_HIT_27(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(28U), __MW_INSTRUM_RECORD_COMBINATION_HIT_27(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_27(expr) \
  ((expr) ? \
   ((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(27U), __MW_INSTRUM_RECORD_COMBINATION_HIT_27(), 1) : 1) : \
   ((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(28U), __MW_INSTRUM_RECORD_COMBINATION_HIT_27(), 0) : 0))
#endif


#define __MW_INSTRUM_FCN_ENTER_1() 
#define __MW_INSTRUM_FCN_ENTER_2() 
#define __MW_INSTRUM_FCN_ENTER_3() 
#define __MW_INSTRUM_FCN_ENTER_4() 
#define __MW_INSTRUM_FCN_ENTER_5() \
  unsigned int __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_curr_combination_idx_27 = 0; 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_abs_tol;
#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_rel_tol;

#define __MW_INSTRUM_ABS(a) ((a) < 0 ? -(a) : (a))
#define __MW_INSTRUM_MAX(lhs, rhs) ((lhs) < (rhs) ? (rhs) : (lhs))
#define __MW_INSTRUM_TOL(lhs, rhs) __MW_INSTRUM_MAX(__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_abs_tol, __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_rel_tol * __MW_INSTRUM_MAX(__MW_INSTRUM_ABS(lhs), __MW_INSTRUM_ABS(rhs)))

#define __MW_INSTRUM_NODE_1() \
  (((!__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled || __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables = __MW_INSTRUM_ClCC5YL3Lja2hMx7y36oTE_cclib_INIT_FILE(27)))), \
   __MW_INSTRUM_RECORD_HIT(1U))
#define __MW_INSTRUM_NODE_2() \
  (__MW_INSTRUM_RECORD_HIT(2U))
#define __MW_INSTRUM_NODE_3() \
  (((!__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled || __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables = __MW_INSTRUM_ClCC5YL3Lja2hMx7y36oTE_cclib_INIT_FILE(27)))), \
   __MW_INSTRUM_RECORD_HIT(3U))
#define __MW_INSTRUM_NODE_4() \
  (__MW_INSTRUM_RECORD_HIT(4U))
#define __MW_INSTRUM_NODE_5() \
  (((!__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled || __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables = __MW_INSTRUM_ClCC5YL3Lja2hMx7y36oTE_cclib_INIT_FILE(27)))), \
   __MW_INSTRUM_RECORD_HIT(5U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_6(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(6U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(7U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_6(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(6U), 1) : (__MW_INSTRUM_RECORD_HIT(7U), 0))
#endif
#define __MW_INSTRUM_NODE_8(lhs, rhs) (((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(8U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(9U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(10U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_11() \
  (__MW_INSTRUM_RECORD_HIT(11U))
#define __MW_INSTRUM_NODE_12() \
  (((!__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled || __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables = __MW_INSTRUM_ClCC5YL3Lja2hMx7y36oTE_cclib_INIT_FILE(27)))), \
   __MW_INSTRUM_RECORD_HIT(12U))
#define __MW_INSTRUM_NODE_13() \
  (__MW_INSTRUM_RECORD_HIT(13U))
#define __MW_INSTRUM_NODE_14() \
  (__MW_INSTRUM_RECORD_HIT(14U))
#define __MW_INSTRUM_NODE_15() \
  (__MW_INSTRUM_RECORD_HIT(15U))
#define __MW_INSTRUM_NODE_16() \
  (__MW_INSTRUM_RECORD_HIT(16U))
#define __MW_INSTRUM_NODE_17() \
  (__MW_INSTRUM_RECORD_HIT(17U))
#define __MW_INSTRUM_NODE_18() \
  (__MW_INSTRUM_RECORD_HIT(18U))
#define __MW_INSTRUM_NODE_19() \
  (__MW_INSTRUM_RECORD_HIT(19U))
#define __MW_INSTRUM_NODE_20() \
  (__MW_INSTRUM_RECORD_HIT(20U))
#define __MW_INSTRUM_NODE_21() \
  (((!__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled || __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_ptruth_tables = __MW_INSTRUM_ClCC5YL3Lja2hMx7y36oTE_cclib_INIT_FILE(27)))), \
   __MW_INSTRUM_RECORD_HIT(21U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_22(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(22U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(23U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_22(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(22U), 1) : (__MW_INSTRUM_RECORD_HIT(23U), 0))
#endif
#define __MW_INSTRUM_NODE_24(lhs, rhs) (((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(24U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(25U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(26U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_31(lhs, rhs) (((__mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_enabled && __mw_instrum_ClCC5YL3Lja2hMx7y36oTE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(31U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(32U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(33U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_28() \
  (__MW_INSTRUM_RECORD_HIT(28U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_36(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(36U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(37U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_36(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(36U), 1) : (__MW_INSTRUM_RECORD_HIT(37U), 0))
#endif
#define __MW_INSTRUM_NODE_37() \
  (__MW_INSTRUM_RECORD_HIT(37U))
#define __MW_INSTRUM_NODE_38() \
  (__MW_INSTRUM_RECORD_HIT(38U))

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#ifdef __MW_INTERNAL_SLDV_PS_IGNORE_VOLATILE__
#define volatile
#endif /* __MW_INTERNAL_SLDV_PS_IGNORE_VOLATILE__ */
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_29CZ_ClCC5YL3Lja2hMx7y36oTE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_29(...) (__MW_INSTRUM_RECORD_HIT_29CZ_ClCC5YL3Lja2hMx7y36oTE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_29(exp) (__MW_INSTRUM_RECORD_HIT_29CZ_ClCC5YL3Lja2hMx7y36oTE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_34CZ_ClCC5YL3Lja2hMx7y36oTE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_34(...) (__MW_INSTRUM_RECORD_HIT_34CZ_ClCC5YL3Lja2hMx7y36oTE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_34(exp) (__MW_INSTRUM_RECORD_HIT_34CZ_ClCC5YL3Lja2hMx7y36oTE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_27DA_29_34Z_ClCC5YL3Lja2hMx7y36oTE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_27(...) (__MW_INSTRUM_RECORD_HIT_27DA_29_34Z_ClCC5YL3Lja2hMx7y36oTE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_27(exp) (__MW_INSTRUM_RECORD_HIT_27DA_29_34Z_ClCC5YL3Lja2hMx7y36oTE(exp))
#endif


#define __MW_INSTRUM_FCN_ENTER_1() 

#define __MW_INSTRUM_FCN_ENTER_2() 

#define __MW_INSTRUM_FCN_ENTER_3() 

#define __MW_INSTRUM_FCN_ENTER_4() 

#define __MW_INSTRUM_FCN_ENTER_5() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_1EZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_1() __MW_INSTRUM_RECORD_HIT_1EZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_2XZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_2() __MW_INSTRUM_RECORD_HIT_2XZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_3EZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_3() __MW_INSTRUM_RECORD_HIT_3EZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_4XZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_4() __MW_INSTRUM_RECORD_HIT_4XZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_5EZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_5() __MW_INSTRUM_RECORD_HIT_5EZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_6DZ_ClCC5YL3Lja2hMx7y36oTE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_6(...) (__MW_INSTRUM_RECORD_HIT_6DZ_ClCC5YL3Lja2hMx7y36oTE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_6(exp) (__MW_INSTRUM_RECORD_HIT_6DZ_ClCC5YL3Lja2hMx7y36oTE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_8IZ_ClCC5YL3Lja2hMx7y36oTE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_8(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_8IZ_ClCC5YL3Lja2hMx7y36oTE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_11XZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_11() __MW_INSTRUM_RECORD_HIT_11XZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_12EZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_12() __MW_INSTRUM_RECORD_HIT_12EZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_13DZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_13() __MW_INSTRUM_RECORD_HIT_13DZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_14XZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_14() __MW_INSTRUM_RECORD_HIT_14XZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_15DZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_15() __MW_INSTRUM_RECORD_HIT_15DZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_16XZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_16() __MW_INSTRUM_RECORD_HIT_16XZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_17DZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_17() __MW_INSTRUM_RECORD_HIT_17DZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_18XZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_18() __MW_INSTRUM_RECORD_HIT_18XZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_19DZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_19() __MW_INSTRUM_RECORD_HIT_19DZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_20XZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_20() __MW_INSTRUM_RECORD_HIT_20XZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_21EZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_21() __MW_INSTRUM_RECORD_HIT_21EZ_ClCC5YL3Lja2hMx7y36oTE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_22CZ_ClCC5YL3Lja2hMx7y36oTE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_22(...) (__MW_INSTRUM_RECORD_HIT_22CZ_ClCC5YL3Lja2hMx7y36oTE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_22(exp) (__MW_INSTRUM_RECORD_HIT_22CZ_ClCC5YL3Lja2hMx7y36oTE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_24IZ_ClCC5YL3Lja2hMx7y36oTE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_24(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_24IZ_ClCC5YL3Lja2hMx7y36oTE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_31IZ_ClCC5YL3Lja2hMx7y36oTE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_31(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_31IZ_ClCC5YL3Lja2hMx7y36oTE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_28() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_36DZ_ClCC5YL3Lja2hMx7y36oTE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_36(...) (__MW_INSTRUM_RECORD_HIT_36DZ_ClCC5YL3Lja2hMx7y36oTE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_36(exp) (__MW_INSTRUM_RECORD_HIT_36DZ_ClCC5YL3Lja2hMx7y36oTE(exp))
#endif

#define __MW_INSTRUM_NODE_37() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_38XZ_ClCC5YL3Lja2hMx7y36oTE(void) { }
#define __MW_INSTRUM_NODE_38() __MW_INSTRUM_RECORD_HIT_38XZ_ClCC5YL3Lja2hMx7y36oTE()

#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

#line 1 "D:\\00MyFolder\\ADAS\\TosAeb\\TosAeb_20240814\\Interface\\my_func.c"
#line 2 "D:\\00MyFolder\\ADAS\\TosAeb\\TosAeb_20240814\\Interface\\my_func.h"
#ifndef _MY_FUNC_H_
#define _MY_FUNC_H_
#line 12
typedef 
#line 7
enum { 
RED, 
YELLOW, 
GREEN, 
UNKNOWN
} TrafficLightColor; 



typedef 
#line 14
struct { 
int input; 
} SIGNALBUS; 




typedef 
#line 18
struct { 
int upper_saturation_limit; 
int lower_saturation_limit; 
} LIMITBUS; 




typedef 
#line 23
struct { 
SIGNALBUS inputsignal; 
LIMITBUS limits; 
} COUNTERBUS; 


extern double add(double u1, double u2); 
extern double timesK(double u, double K); 
extern void incrementElement(int * u, unsigned size, unsigned increment_idx); 
extern TrafficLightColor getNextTrafficLight(TrafficLightColor current); 
extern void counterbusFcn(const COUNTERBUS * u1, int u2, COUNTERBUS * y1, int * y2); 

#endif /* _MY_FUNC_H_ */
#line 12 "D:\\Program Files\\Polyspace\\R2021a\\extern\\include\\tmwtypes.h"
#ifndef tmwtypes_h
#define tmwtypes_h

#ifndef __TMWTYPES__
#define __TMWTYPES__
#line 23 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime.h"
#ifndef _VCRUNTIME_H
#define _VCRUNTIME_H
#line 36
#ifndef _UCRT
#define _UCRT
#endif /* _UCRT */
#line 148 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\sal.h"
#ifndef _SAL_VERSION
#define _SAL_VERSION 20
#endif /* _SAL_VERSION */

#ifndef __SAL_H_VERSION
#define __SAL_H_VERSION 180000000
#endif /* __SAL_H_VERSION */
#line 182
#ifndef _USE_DECLSPECS_FOR_SAL
#define _USE_DECLSPECS_FOR_SAL 0
#endif /* _USE_DECLSPECS_FOR_SAL */
#ifndef _USE_ATTRIBUTES_FOR_SAL
#define _USE_ATTRIBUTES_FOR_SAL 0
#endif /* _USE_ATTRIBUTES_FOR_SAL */
#line 224
#ifndef _SAL_L_Source_
#define _SAL_L_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "2") _Group_(annotes _SAL_nop_impl_)

#endif /* _SAL_L_Source_ */
#line 2363
#ifndef __nothrow
#define __nothrow
#endif /* __nothrow */
#line 16 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\concurrencysal.h"
#ifndef CONCURRENCYSAL_H
#define CONCURRENCYSAL_H
#line 293
#ifndef _Interlocked_operand_
#define _Interlocked_operand_
#endif /* _Interlocked_operand_ */
#line 394
#endif /* CONCURRENCYSAL_H */
#line 37 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vadefs.h"
#ifndef _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#define _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#endif /* _VCRUNTIME_EXTRA_DISABLED_WARNINGS */



#ifndef _VCRUNTIME_DISABLED_WARNINGS
#define _VCRUNTIME_DISABLED_WARNINGS _VCRUNTIME_DISABLED_WARNING_4339 _VCRUNTIME_DISABLED_WARNING_4412 4514 4820 _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#endif /* _VCRUNTIME_DISABLED_WARNINGS */
#line 58
#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED
#line 708 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\sal.h"
#pragma region Input Buffer SAL 1 compatibility macros
#line 1472
#pragma endregion Input Buffer SAL 1 compatibility macros
#line 15 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vadefs.h"
#pragma pack ( push, 8 )
#line 47
#pragma warning(push)
#pragma warning(disable: 4514 4820)
#line 61
typedef unsigned __int64 uintptr_t; 



#endif /* _UINTPTR_T_DEFINED */

#ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED



typedef char *va_list; 

#endif /* _VA_LIST_DEFINED */
#line 155
void __cdecl __va_start(va_list *, ...); 
#line 207
#pragma warning(pop)
#pragma pack ( pop )
#line 60 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)
#line 96
__pragma( pack ( push, 8 )) 
#line 193
typedef unsigned __int64 size_t; 
typedef __int64 ptrdiff_t; 
typedef __int64 intptr_t; 
#line 209
typedef _Bool __vcrt_bool; 



#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#endif /* _SIZE_T_DEFINED */

#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
#endif /* _PTRDIFF_T_DEFINED */

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
#endif /* _INTPTR_T_DEFINED */


#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
typedef unsigned short wchar_t; 
#endif /* _WCHAR_T_DEFINED */
#line 342
void __cdecl __security_init_cookie(void); 
#line 351
void __cdecl __security_check_cookie(uintptr_t _StackCookie); 
__declspec(noreturn) void __cdecl __report_gsfailure(uintptr_t _StackCookie); 



extern uintptr_t __security_cookie; 
#line 368
#endif /* _VCRUNTIME_H */
#line 8 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\stdbool.h"
#ifndef _STDBOOL
#define _STDBOOL
#line 21
#endif /* _STDBOOL */
#line 62 "D:\\Program Files\\Polyspace\\R2021a\\extern\\include\\tmwtypes.h"
#ifndef FLT_MANT_DIG
#define FLT_MANT_DIG 24
#endif /* FLT_MANT_DIG */
#ifndef DBL_MANT_DIG
#define DBL_MANT_DIG 53
#endif /* DBL_MANT_DIG */
#line 364 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 13 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\limits.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)

__pragma( pack ( push, 8 )) 
#line 76
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 89 "D:\\Program Files\\Polyspace\\R2021a\\extern\\include\\tmwtypes.h"
typedef unsigned char uchar_T; 
typedef unsigned short ushort_T; 
typedef unsigned long ulong_T; 
#line 97
typedef unsigned __int64 ulonglong_T; 
#line 222
typedef char int8_T; 
#line 239
typedef unsigned char uint8_T; 
#line 257
typedef short int16_T; 
#line 275
typedef unsigned short uint16_T; 
#line 293
typedef int int32_T; 
#line 311
typedef unsigned uint32_T; 
#line 372
typedef float real32_T; 
#line 386
typedef double real64_T; 
#line 436
#ifndef INT64_T
#define INT64_T __int64
#endif /* INT64_T */
#ifndef UINT64_T
#define UINT64_T unsigned __int64
#endif /* UINT64_T */
#ifndef FMT64
#define FMT64 "I64"
#endif /* FMT64 */
#line 465
typedef __int64 int64_T; 
#line 479
typedef unsigned __int64 uint64_T; 
#line 535
typedef real64_T real_T; 
#line 544
typedef real_T time_T; 
#line 556
typedef unsigned char boolean_T; 


#ifndef CHARACTER_T
#define CHARACTER_T char
#endif /* CHARACTER_T */
typedef char char_T; 


#ifndef INTEGER_T
#define INTEGER_T int
#endif /* INTEGER_T */
typedef int int_T; 


#ifndef UINTEGER_T
#define UINTEGER_T unsigned
#endif /* UINTEGER_T */
typedef unsigned uint_T; 


#ifndef BYTE_T
#define BYTE_T unsigned char
#endif /* BYTE_T */
typedef unsigned char byte_T; 
#line 592
typedef 
#line 590
struct { 
real32_T re, im; 
} creal32_T; 
#line 601
typedef 
#line 599
struct { 
real64_T re, im; 
} creal64_T; 
#line 610
typedef 
#line 608
struct { 
real_T re, im; 
} creal_T; 
#line 621
typedef 
#line 619
struct { 
int8_T re, im; 
} cint8_T; 
#line 630
typedef 
#line 628
struct { 
uint8_T re, im; 
} cuint8_T; 
#line 639
typedef 
#line 637
struct { 
int16_T re, im; 
} cint16_T; 
#line 648
typedef 
#line 646
struct { 
uint16_T re, im; 
} cuint16_T; 
#line 657
typedef 
#line 655
struct { 
int32_T re, im; 
} cint32_T; 
#line 666
typedef 
#line 664
struct { 
uint32_T re, im; 
} cuint32_T; 
#line 675
typedef 
#line 673
struct { 
int64_T re, im; 
} cint64_T; 
#line 684
typedef 
#line 682
struct { 
uint64_T re, im; 
} cuint64_T; 
#line 759
__forceinline uint64_T double_to_uint64_helper(double d) { 
union double_to_uint64_union_type { 
double dd; 
uint64_T i64; 
} di; 
di.dd = d; 
return (((di.i64) & (0xfffffffffffffi64)) | (0x10000000000000i64)) << 11; 
} 
#line 9 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stddef.h"
#ifndef _INC_STDDEF
#define _INC_STDDEF
#line 40 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt.h"
#ifndef _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE
#define _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE 1
#endif /* _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE */
#line 76
#ifndef _UCRT_EXTRA_DISABLED_WARNINGS
#define _UCRT_EXTRA_DISABLED_WARNINGS
#endif /* _UCRT_EXTRA_DISABLED_WARNINGS */
#line 92
#ifndef _UCRT_DISABLED_WARNINGS
#define _UCRT_DISABLED_WARNINGS 4324 _UCRT_DISABLED_WARNING_4412 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 _UCRT_EXTRA_DISABLED_WARNINGS
#endif /* _UCRT_DISABLED_WARNINGS */
#line 144
#ifndef _ACRTIMP_ALT
#define _ACRTIMP_ALT _ACRTIMP
#endif /* _ACRTIMP_ALT */
#line 121
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 274
typedef _Bool __crt_bool; 
#line 328
#ifndef _CRT_UNUSED
#define _CRT_UNUSED(x) (void)x
#endif /* _CRT_UNUSED */
#line 371
__declspec(dllimport) void __cdecl _invalid_parameter_noinfo(void); 
__declspec(dllimport) __declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(void); 

__declspec(noreturn) 
__declspec(dllimport) void __cdecl _invoke_watson(const wchar_t * _Expression, const wchar_t * _FunctionName, const wchar_t * _FileName, unsigned _LineNo, uintptr_t _Reserved); 
#line 498
#ifndef __STDC_WANT_SECURE_LIB__
#define __STDC_WANT_SECURE_LIB__ 1
#endif /* __STDC_WANT_SECURE_LIB__ */
#line 593
#ifndef _CRT_SECURE_CPP_NOTHROW
#define _CRT_SECURE_CPP_NOTHROW throw()
#endif /* _CRT_SECURE_CPP_NOTHROW */
#line 604
typedef int errno_t; 
typedef unsigned short wint_t; 
typedef unsigned short wctype_t; 
typedef long __time32_t; 
typedef __int64 __time64_t; 
#line 615
typedef 
#line 610
struct __crt_locale_data_public { 

const unsigned short *_locale_pctype; 
int _locale_mb_cur_max; 
unsigned _locale_lc_codepage; 
} __crt_locale_data_public; 
#line 621
typedef 
#line 617
struct __crt_locale_pointers { 

struct __crt_locale_data *locinfo; 
struct __crt_multibyte_data *mbcinfo; 
} __crt_locale_pointers; 

typedef __crt_locale_pointers *_locale_t; 
#line 629
typedef 
#line 625
struct _Mbstatet { 

unsigned long _Wchar; 
unsigned short _Byte, _State; 
} _Mbstatet; 

typedef _Mbstatet mbstate_t; 
#line 645
typedef __time64_t time_t; 




#ifndef _TIME_T_DEFINED
#define _TIME_T_DEFINED
#endif /* _TIME_T_DEFINED */


typedef size_t rsize_t; 
#line 2072
__pragma( pack ( pop )) 


#pragma warning(pop)
#line 14 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stddef.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 35
__declspec(dllimport) int *__cdecl _errno(void); 


__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 
#line 55
__declspec(dllimport) extern unsigned long __cdecl __threadid(void); 

__declspec(dllimport) extern uintptr_t __cdecl __threadhandle(void); 
#line 64
#endif /* _INC_STDDEF */
#line 61
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 834 "D:\\Program Files\\Polyspace\\R2021a\\extern\\include\\tmwtypes.h"
typedef size_t mwSize; 
typedef size_t mwIndex; 
typedef ptrdiff_t mwSignedIndex; 



#ifndef SLSIZE_SLINDEX
#define SLSIZE_SLINDEX

typedef int64_T SLIndex; 
typedef int64_T SLSize; 




#endif /* SLSIZE_SLINDEX */
#line 878
typedef wchar_t CHAR16_T; 





#endif /* __TMWTYPES__ */

#endif /* tmwtypes_h */
#line 5 "D:\\00MyFolder\\ADAS\\TosAeb\\TosAeb_20240814\\Interface\\my_func.c"
double add(double u1, double u2) 
{ __MW_INSTRUM_FCN_ENTER_1(); __MW_INSTRUM_NODE_1(); 
{ double __mw_tmp_for_return = u1 + u2; __MW_INSTRUM_NODE_2(); return __mw_tmp_for_return; } 
} 

double timesK(double u, double K) 
{ __MW_INSTRUM_FCN_ENTER_2(); __MW_INSTRUM_NODE_3(); 
{ double __mw_tmp_for_return = u * K; __MW_INSTRUM_NODE_4(); return __mw_tmp_for_return; } 
} 

void incrementElement(int *u, unsigned size, unsigned increment_idx) 
{ __MW_INSTRUM_FCN_ENTER_3(); __MW_INSTRUM_NODE_5(); { 
if (__MW_INSTRUM_NODE_6((__MW_INSTRUM_NODE_8(increment_idx, size), (increment_idx < size)))) { 
(u[increment_idx])++; 
}  } __MW_INSTRUM_NODE_11(); 
} 

TrafficLightColor getNextTrafficLight(TrafficLightColor current) 
{ __MW_INSTRUM_FCN_ENTER_4(); __MW_INSTRUM_NODE_12(); { 
switch (current) { 
case RED:  __MW_INSTRUM_NODE_13(); __MW_INSTRUM_NODE_14(); 
return GREEN; 
case YELLOW:  __MW_INSTRUM_NODE_15(); __MW_INSTRUM_NODE_16(); 
return RED; 
case GREEN:  __MW_INSTRUM_NODE_17(); __MW_INSTRUM_NODE_18(); 
return YELLOW; 
default:  __MW_INSTRUM_NODE_19(); __MW_INSTRUM_NODE_20(); 
return UNKNOWN; 
}  } 
} 

void counterbusFcn(const COUNTERBUS *u1, int32_T u2, COUNTERBUS *y1, int32_T *y2) 
{ int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_5(); __MW_INSTRUM_NODE_21(); { 
int32_T limit; 
boolean_T inputGElower; 
limit = (u1->inputsignal).input + u2; 
inputGElower = __MW_INSTRUM_NODE_22(((__mw_tmp_for_expr_1 = (u1->limits).lower_saturation_limit), (__MW_INSTRUM_NODE_24(limit, __mw_tmp_for_expr_1), (limit >= __mw_tmp_for_expr_1)))); { 
if (__MW_INSTRUM_NODE_27(__MW_INSTRUM_NODE_29(((__mw_tmp_for_expr_2 = (u1->limits).upper_saturation_limit), (__MW_INSTRUM_NODE_31(__mw_tmp_for_expr_2, limit), (__mw_tmp_for_expr_2 >= limit)))) && (__MW_INSTRUM_NODE_34(inputGElower)))) { 
*y2 = limit; 
} else { { 
if (__MW_INSTRUM_NODE_36(inputGElower)) { 
limit = (u1->limits).upper_saturation_limit; 
} else { 
limit = (u1->limits).lower_saturation_limit; 
}  } 
*y2 = limit; 
}  } 
(y1->inputsignal).input = *y2; 
y1->limits = u1->limits; } __MW_INSTRUM_NODE_38(); 
} 
