/* NOTE - eventually this file will be automatically updated using a Perl script that understand
 * the naming of test case files, functions, and namespaces.
 */

#include <time.h>   /* for time() */
#include <stdlib.h> /* for srand() */

#include "std_testcase.h"
#include "testcases.h"

int main(int argc, char * argv[]) {

	/* seed randomness */

	srand( (unsigned)time(NULL) );

	globalArgc = argc;
	globalArgv = argv;

#ifndef OMITGOOD

	/* Calling C good functions */
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE127_Buffer_Underread__CWE839_connect_socket_01_good();");
	CWE127_Buffer_Underread__CWE839_connect_socket_01_good();

	printLine("Calling CWE127_Buffer_Underread__char_declare_memcpy_02_good();");
	CWE127_Buffer_Underread__char_declare_memcpy_02_good();

	printLine("Calling CWE127_Buffer_Underread__CWE839_listen_socket_02_good();");
	CWE127_Buffer_Underread__CWE839_listen_socket_02_good();

	printLine("Calling CWE127_Buffer_Underread__char_declare_loop_01_good();");
	CWE127_Buffer_Underread__char_declare_loop_01_good();

	printLine("Calling CWE127_Buffer_Underread__char_declare_memmove_01_good();");
	CWE127_Buffer_Underread__char_declare_memmove_01_good();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_memmove_02_good();");
	CWE127_Buffer_Underread__char_alloca_memmove_02_good();

	printLine("Calling CWE127_Buffer_Underread__CWE839_fgets_02_good();");
	CWE127_Buffer_Underread__CWE839_fgets_02_good();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_cpy_01_good();");
	CWE127_Buffer_Underread__char_alloca_cpy_01_good();

	printLine("Calling CWE127_Buffer_Underread__CWE839_listen_socket_01_good();");
	CWE127_Buffer_Underread__CWE839_listen_socket_01_good();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_loop_01_good();");
	CWE127_Buffer_Underread__char_alloca_loop_01_good();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_ncpy_02_good();");
	CWE127_Buffer_Underread__char_alloca_ncpy_02_good();

	printLine("Calling CWE127_Buffer_Underread__char_declare_loop_02_good();");
	CWE127_Buffer_Underread__char_declare_loop_02_good();

	printLine("Calling CWE127_Buffer_Underread__char_declare_ncpy_01_good();");
	CWE127_Buffer_Underread__char_declare_ncpy_01_good();

	printLine("Calling CWE127_Buffer_Underread__CWE839_fscanf_02_good();");
	CWE127_Buffer_Underread__CWE839_fscanf_02_good();

	printLine("Calling CWE127_Buffer_Underread__char_declare_cpy_01_good();");
	CWE127_Buffer_Underread__char_declare_cpy_01_good();

	printLine("Calling CWE127_Buffer_Underread__char_declare_ncpy_02_good();");
	CWE127_Buffer_Underread__char_declare_ncpy_02_good();

	printLine("Calling CWE127_Buffer_Underread__CWE839_fgets_01_good();");
	CWE127_Buffer_Underread__CWE839_fgets_01_good();

	printLine("Calling CWE127_Buffer_Underread__char_declare_memcpy_01_good();");
	CWE127_Buffer_Underread__char_declare_memcpy_01_good();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_ncpy_01_good();");
	CWE127_Buffer_Underread__char_alloca_ncpy_01_good();

	printLine("Calling CWE127_Buffer_Underread__char_declare_memmove_02_good();");
	CWE127_Buffer_Underread__char_declare_memmove_02_good();

	printLine("Calling CWE127_Buffer_Underread__char_declare_cpy_02_good();");
	CWE127_Buffer_Underread__char_declare_cpy_02_good();

	printLine("Calling CWE127_Buffer_Underread__CWE839_fscanf_01_good();");
	CWE127_Buffer_Underread__CWE839_fscanf_01_good();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_loop_02_good();");
	CWE127_Buffer_Underread__char_alloca_loop_02_good();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_memcpy_01_good();");
	CWE127_Buffer_Underread__char_alloca_memcpy_01_good();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_cpy_02_good();");
	CWE127_Buffer_Underread__char_alloca_cpy_02_good();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_memmove_01_good();");
	CWE127_Buffer_Underread__char_alloca_memmove_01_good();

	printLine("Calling CWE127_Buffer_Underread__CWE839_connect_socket_02_good();");
	CWE127_Buffer_Underread__CWE839_connect_socket_02_good();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_memcpy_02_good();");
	CWE127_Buffer_Underread__char_alloca_memcpy_02_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */





#ifdef __cplusplus
	/* Calling C++ good functions */
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

#endif /* __cplusplus */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE127_Buffer_Underread__CWE839_connect_socket_01_bad();");
	CWE127_Buffer_Underread__CWE839_connect_socket_01_bad();

	printLine("Calling CWE127_Buffer_Underread__char_declare_memcpy_02_bad();");
	CWE127_Buffer_Underread__char_declare_memcpy_02_bad();

	printLine("Calling CWE127_Buffer_Underread__CWE839_listen_socket_02_bad();");
	CWE127_Buffer_Underread__CWE839_listen_socket_02_bad();

	printLine("Calling CWE127_Buffer_Underread__char_declare_loop_01_bad();");
	CWE127_Buffer_Underread__char_declare_loop_01_bad();

	printLine("Calling CWE127_Buffer_Underread__char_declare_memmove_01_bad();");
	CWE127_Buffer_Underread__char_declare_memmove_01_bad();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_memmove_02_bad();");
	CWE127_Buffer_Underread__char_alloca_memmove_02_bad();

	printLine("Calling CWE127_Buffer_Underread__CWE839_fgets_02_bad();");
	CWE127_Buffer_Underread__CWE839_fgets_02_bad();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_cpy_01_bad();");
	CWE127_Buffer_Underread__char_alloca_cpy_01_bad();

	printLine("Calling CWE127_Buffer_Underread__CWE839_listen_socket_01_bad();");
	CWE127_Buffer_Underread__CWE839_listen_socket_01_bad();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_loop_01_bad();");
	CWE127_Buffer_Underread__char_alloca_loop_01_bad();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_ncpy_02_bad();");
	CWE127_Buffer_Underread__char_alloca_ncpy_02_bad();

	printLine("Calling CWE127_Buffer_Underread__char_declare_loop_02_bad();");
	CWE127_Buffer_Underread__char_declare_loop_02_bad();

	printLine("Calling CWE127_Buffer_Underread__char_declare_ncpy_01_bad();");
	CWE127_Buffer_Underread__char_declare_ncpy_01_bad();

	printLine("Calling CWE127_Buffer_Underread__CWE839_fscanf_02_bad();");
	CWE127_Buffer_Underread__CWE839_fscanf_02_bad();

	printLine("Calling CWE127_Buffer_Underread__char_declare_cpy_01_bad();");
	CWE127_Buffer_Underread__char_declare_cpy_01_bad();

	printLine("Calling CWE127_Buffer_Underread__char_declare_ncpy_02_bad();");
	CWE127_Buffer_Underread__char_declare_ncpy_02_bad();

	printLine("Calling CWE127_Buffer_Underread__CWE839_fgets_01_bad();");
	CWE127_Buffer_Underread__CWE839_fgets_01_bad();

	printLine("Calling CWE127_Buffer_Underread__char_declare_memcpy_01_bad();");
	CWE127_Buffer_Underread__char_declare_memcpy_01_bad();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_ncpy_01_bad();");
	CWE127_Buffer_Underread__char_alloca_ncpy_01_bad();

	printLine("Calling CWE127_Buffer_Underread__char_declare_memmove_02_bad();");
	CWE127_Buffer_Underread__char_declare_memmove_02_bad();

	printLine("Calling CWE127_Buffer_Underread__char_declare_cpy_02_bad();");
	CWE127_Buffer_Underread__char_declare_cpy_02_bad();

	printLine("Calling CWE127_Buffer_Underread__CWE839_fscanf_01_bad();");
	CWE127_Buffer_Underread__CWE839_fscanf_01_bad();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_loop_02_bad();");
	CWE127_Buffer_Underread__char_alloca_loop_02_bad();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_memcpy_01_bad();");
	CWE127_Buffer_Underread__char_alloca_memcpy_01_bad();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_cpy_02_bad();");
	CWE127_Buffer_Underread__char_alloca_cpy_02_bad();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_memmove_01_bad();");
	CWE127_Buffer_Underread__char_alloca_memmove_01_bad();

	printLine("Calling CWE127_Buffer_Underread__CWE839_connect_socket_02_bad();");
	CWE127_Buffer_Underread__CWE839_connect_socket_02_bad();

	printLine("Calling CWE127_Buffer_Underread__char_alloca_memcpy_02_bad();");
	CWE127_Buffer_Underread__char_alloca_memcpy_02_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
