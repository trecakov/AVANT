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
	printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_02_good();");
	CWE191_Integer_Underflow__char_rand_multiply_02_good();

	printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_02_good();");
	CWE191_Integer_Underflow__char_fscanf_sub_02_good();

	printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_01_good();");
	CWE191_Integer_Underflow__char_fscanf_sub_01_good();

	printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_01_good();");
	CWE191_Integer_Underflow__int64_t_min_multiply_01_good();

	printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_02_good();");
	CWE191_Integer_Underflow__char_fscanf_multiply_02_good();

	printLine("Calling CWE191_Integer_Underflow__char_min_sub_01_good();");
	CWE191_Integer_Underflow__char_min_sub_01_good();

	printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_02_good();");
	CWE191_Integer_Underflow__int64_t_min_sub_02_good();

	printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_02_good();");
	CWE191_Integer_Underflow__int64_t_min_multiply_02_good();

	printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_01_good();");
	CWE191_Integer_Underflow__int64_t_fscanf_multiply_01_good();

	printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_01_good();");
	CWE191_Integer_Underflow__int64_t_fscanf_sub_01_good();

	printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_01_good();");
	CWE191_Integer_Underflow__char_rand_multiply_01_good();

	printLine("Calling CWE191_Integer_Underflow__char_min_sub_02_good();");
	CWE191_Integer_Underflow__char_min_sub_02_good();

	printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_02_good();");
	CWE191_Integer_Underflow__int64_t_fscanf_sub_02_good();

	printLine("Calling CWE191_Integer_Underflow__char_min_multiply_01_good();");
	CWE191_Integer_Underflow__char_min_multiply_01_good();

	printLine("Calling CWE191_Integer_Underflow__char_rand_sub_02_good();");
	CWE191_Integer_Underflow__char_rand_sub_02_good();

	printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_01_good();");
	CWE191_Integer_Underflow__int64_t_min_sub_01_good();

	printLine("Calling CWE191_Integer_Underflow__char_min_multiply_02_good();");
	CWE191_Integer_Underflow__char_min_multiply_02_good();

	printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_01_good();");
	CWE191_Integer_Underflow__int64_t_rand_multiply_01_good();

	printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_02_good();");
	CWE191_Integer_Underflow__int64_t_fscanf_multiply_02_good();

	printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_02_good();");
	CWE191_Integer_Underflow__int64_t_rand_multiply_02_good();

	printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_01_good();");
	CWE191_Integer_Underflow__char_fscanf_multiply_01_good();

	printLine("Calling CWE191_Integer_Underflow__char_rand_sub_01_good();");
	CWE191_Integer_Underflow__char_rand_sub_01_good();

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
	printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_02_bad();");
	CWE191_Integer_Underflow__char_rand_multiply_02_bad();

	printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_02_bad();");
	CWE191_Integer_Underflow__char_fscanf_sub_02_bad();

	printLine("Calling CWE191_Integer_Underflow__char_fscanf_sub_01_bad();");
	CWE191_Integer_Underflow__char_fscanf_sub_01_bad();

	printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_01_bad();");
	CWE191_Integer_Underflow__int64_t_min_multiply_01_bad();

	printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_02_bad();");
	CWE191_Integer_Underflow__char_fscanf_multiply_02_bad();

	printLine("Calling CWE191_Integer_Underflow__char_min_sub_01_bad();");
	CWE191_Integer_Underflow__char_min_sub_01_bad();

	printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_02_bad();");
	CWE191_Integer_Underflow__int64_t_min_sub_02_bad();

	printLine("Calling CWE191_Integer_Underflow__int64_t_min_multiply_02_bad();");
	CWE191_Integer_Underflow__int64_t_min_multiply_02_bad();

	printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_01_bad();");
	CWE191_Integer_Underflow__int64_t_fscanf_multiply_01_bad();

	printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_01_bad();");
	CWE191_Integer_Underflow__int64_t_fscanf_sub_01_bad();

	printLine("Calling CWE191_Integer_Underflow__char_rand_multiply_01_bad();");
	CWE191_Integer_Underflow__char_rand_multiply_01_bad();

	printLine("Calling CWE191_Integer_Underflow__char_min_sub_02_bad();");
	CWE191_Integer_Underflow__char_min_sub_02_bad();

	printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_sub_02_bad();");
	CWE191_Integer_Underflow__int64_t_fscanf_sub_02_bad();

	printLine("Calling CWE191_Integer_Underflow__char_min_multiply_01_bad();");
	CWE191_Integer_Underflow__char_min_multiply_01_bad();

	printLine("Calling CWE191_Integer_Underflow__char_rand_sub_02_bad();");
	CWE191_Integer_Underflow__char_rand_sub_02_bad();

	printLine("Calling CWE191_Integer_Underflow__int64_t_min_sub_01_bad();");
	CWE191_Integer_Underflow__int64_t_min_sub_01_bad();

	printLine("Calling CWE191_Integer_Underflow__char_min_multiply_02_bad();");
	CWE191_Integer_Underflow__char_min_multiply_02_bad();

	printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_01_bad();");
	CWE191_Integer_Underflow__int64_t_rand_multiply_01_bad();

	printLine("Calling CWE191_Integer_Underflow__int64_t_fscanf_multiply_02_bad();");
	CWE191_Integer_Underflow__int64_t_fscanf_multiply_02_bad();

	printLine("Calling CWE191_Integer_Underflow__int64_t_rand_multiply_02_bad();");
	CWE191_Integer_Underflow__int64_t_rand_multiply_02_bad();

	printLine("Calling CWE191_Integer_Underflow__char_fscanf_multiply_01_bad();");
	CWE191_Integer_Underflow__char_fscanf_multiply_01_bad();

	printLine("Calling CWE191_Integer_Underflow__char_rand_sub_01_bad();");
	CWE191_Integer_Underflow__char_rand_sub_01_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
