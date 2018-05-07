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
	printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_01_good();");
	CWE190_Integer_Overflow__char_rand_multiply_01_good();

	printLine("Calling CWE190_Integer_Overflow__char_max_square_01_good();");
	CWE190_Integer_Overflow__char_max_square_01_good();

	printLine("Calling CWE190_Integer_Overflow__char_rand_square_01_good();");
	CWE190_Integer_Overflow__char_rand_square_01_good();

	printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_02_good();");
	CWE190_Integer_Overflow__int64_t_fscanf_multiply_02_good();

	printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_02_good();");
	CWE190_Integer_Overflow__char_fscanf_add_02_good();

	printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_02_good();");
	CWE190_Integer_Overflow__int64_t_fscanf_add_02_good();

	printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_02_good();");
	CWE190_Integer_Overflow__char_rand_multiply_02_good();

	printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_01_good();");
	CWE190_Integer_Overflow__char_fscanf_multiply_01_good();

	printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_02_good();");
	CWE190_Integer_Overflow__char_fscanf_multiply_02_good();

	printLine("Calling CWE190_Integer_Overflow__char_max_multiply_01_good();");
	CWE190_Integer_Overflow__char_max_multiply_01_good();

	printLine("Calling CWE190_Integer_Overflow__char_rand_add_01_good();");
	CWE190_Integer_Overflow__char_rand_add_01_good();

	printLine("Calling CWE190_Integer_Overflow__char_max_add_02_good();");
	CWE190_Integer_Overflow__char_max_add_02_good();

	printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_01_good();");
	CWE190_Integer_Overflow__char_fscanf_add_01_good();

	printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_01_good();");
	CWE190_Integer_Overflow__char_fscanf_square_01_good();

	printLine("Calling CWE190_Integer_Overflow__char_rand_add_02_good();");
	CWE190_Integer_Overflow__char_rand_add_02_good();

	printLine("Calling CWE190_Integer_Overflow__char_max_multiply_02_good();");
	CWE190_Integer_Overflow__char_max_multiply_02_good();

	printLine("Calling CWE190_Integer_Overflow__char_max_square_02_good();");
	CWE190_Integer_Overflow__char_max_square_02_good();

	printLine("Calling CWE190_Integer_Overflow__char_max_add_01_good();");
	CWE190_Integer_Overflow__char_max_add_01_good();

	printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_01_good();");
	CWE190_Integer_Overflow__int64_t_fscanf_add_01_good();

	printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_01_good();");
	CWE190_Integer_Overflow__int64_t_fscanf_multiply_01_good();

	printLine("Calling CWE190_Integer_Overflow__char_rand_square_02_good();");
	CWE190_Integer_Overflow__char_rand_square_02_good();

	printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_02_good();");
	CWE190_Integer_Overflow__char_fscanf_square_02_good();

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
	printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_01_bad();");
	CWE190_Integer_Overflow__char_rand_multiply_01_bad();

	printLine("Calling CWE190_Integer_Overflow__char_max_square_01_bad();");
	CWE190_Integer_Overflow__char_max_square_01_bad();

	printLine("Calling CWE190_Integer_Overflow__char_rand_square_01_bad();");
	CWE190_Integer_Overflow__char_rand_square_01_bad();

	printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_02_bad();");
	CWE190_Integer_Overflow__int64_t_fscanf_multiply_02_bad();

	printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_02_bad();");
	CWE190_Integer_Overflow__char_fscanf_add_02_bad();

	printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_02_bad();");
	CWE190_Integer_Overflow__int64_t_fscanf_add_02_bad();

	printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_02_bad();");
	CWE190_Integer_Overflow__char_rand_multiply_02_bad();

	printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_01_bad();");
	CWE190_Integer_Overflow__char_fscanf_multiply_01_bad();

	printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_02_bad();");
	CWE190_Integer_Overflow__char_fscanf_multiply_02_bad();

	printLine("Calling CWE190_Integer_Overflow__char_max_multiply_01_bad();");
	CWE190_Integer_Overflow__char_max_multiply_01_bad();

	printLine("Calling CWE190_Integer_Overflow__char_rand_add_01_bad();");
	CWE190_Integer_Overflow__char_rand_add_01_bad();

	printLine("Calling CWE190_Integer_Overflow__char_max_add_02_bad();");
	CWE190_Integer_Overflow__char_max_add_02_bad();

	printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_01_bad();");
	CWE190_Integer_Overflow__char_fscanf_add_01_bad();

	printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_01_bad();");
	CWE190_Integer_Overflow__char_fscanf_square_01_bad();

	printLine("Calling CWE190_Integer_Overflow__char_rand_add_02_bad();");
	CWE190_Integer_Overflow__char_rand_add_02_bad();

	printLine("Calling CWE190_Integer_Overflow__char_max_multiply_02_bad();");
	CWE190_Integer_Overflow__char_max_multiply_02_bad();

	printLine("Calling CWE190_Integer_Overflow__char_max_square_02_bad();");
	CWE190_Integer_Overflow__char_max_square_02_bad();

	printLine("Calling CWE190_Integer_Overflow__char_max_add_01_bad();");
	CWE190_Integer_Overflow__char_max_add_01_bad();

	printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_01_bad();");
	CWE190_Integer_Overflow__int64_t_fscanf_add_01_bad();

	printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_01_bad();");
	CWE190_Integer_Overflow__int64_t_fscanf_multiply_01_bad();

	printLine("Calling CWE190_Integer_Overflow__char_rand_square_02_bad();");
	CWE190_Integer_Overflow__char_rand_square_02_bad();

	printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_02_bad();");
	CWE190_Integer_Overflow__char_fscanf_square_02_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
