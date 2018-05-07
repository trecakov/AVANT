// NOTE - eventually this file will be automatically updated using a Perl script that understand
// the naming of test case files, functions, and namespaces.

#ifndef _TESTCASES_H
#define _TESTCASES_H

#ifdef __cplusplus
extern "C" {
#endif

// declare C good and bad functions
#ifndef OMITGOOD
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-DECLARATIONS */
	void CWE122_Heap_Based_Buffer_Overflow__char_type_overrun_memcpy_01_good();

	void CWE122_Heap_Based_Buffer_Overflow__char_type_overrun_memcpy_02_good();

	void CWE122_Heap_Based_Buffer_Overflow__char_type_overrun_memmove_02_good();

	void CWE122_Heap_Based_Buffer_Overflow__char_type_overrun_memmove_01_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-DECLARATIONS */
#endif // OMITGOOD


#ifndef OMITBAD
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-DECLARATIONS */
	void CWE122_Heap_Based_Buffer_Overflow__char_type_overrun_memcpy_01_bad();

	void CWE122_Heap_Based_Buffer_Overflow__char_type_overrun_memcpy_02_bad();

	void CWE122_Heap_Based_Buffer_Overflow__char_type_overrun_memmove_02_bad();

	void CWE122_Heap_Based_Buffer_Overflow__char_type_overrun_memmove_01_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-DECLARATIONS */
#endif // OMITBAD

#ifdef __cplusplus
} // end extern "C"
#endif

#ifdef __cplusplus
// declare C++ namespaces and good and bad functions

#ifndef OMITGOOD
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-DECLARATIONS */
	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fscanf_01 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_listen_socket_01 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_01 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_connect_socket_02 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_large_01 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_ncpy_01 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_loop_02 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_cpy_01 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_cpy_02 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_ncpy_02 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fscanf_02 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_listen_socket_02 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_memcpy_02 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_memmove_01 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_large_02 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_memcpy_01 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_memmove_02 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_rand_01 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_02 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_loop_01 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_connect_socket_01 { void good();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_rand_02 { void good();}

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-DECLARATIONS */
#endif // OMITGOOD


#ifndef OMITBAD
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-DECLARATIONS */
	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fscanf_01 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_listen_socket_01 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_01 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_connect_socket_02 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_large_01 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_ncpy_01 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_loop_02 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_cpy_01 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_cpy_02 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_ncpy_02 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fscanf_02 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_listen_socket_02 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_memcpy_02 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_memmove_01 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_large_02 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_memcpy_01 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_memmove_02 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_rand_01 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_fgets_02 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_loop_01 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_connect_socket_01 { void bad();}

	namespace CWE122_Heap_Based_Buffer_Overflow__cpp_CWE129_rand_02 { void bad();}

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-DECLARATIONS */
#endif // OMITBAD


#endif // __cplusplus


#endif //  _TESTCASES_H
