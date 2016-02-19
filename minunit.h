#ifndef MINUNIT_H
#define MINUNIT_H

/* 
 * LICENSE:
 * You may use the code in this tech note for any purpose,
 * with the understanding that it comes with NO WARRANTY.
 *
 * From http://www.jera.com/techinfo/jtns/jtn002.html
 */

#define mu_assert(message, test) \
	do { \
		if (!(test)) \
			return message "\n"; \
	} while (0)

#define mu_assert_fail(message)
	mu_assert(message, 0)

#define mu_assert_str_eq(message, tested, correct) \
	mu_assert(message, strcmp(tested, correct) == 0)

#define mu_assert_str_neq(message, tested, correct) \
	mu_assert(message, strcmp(tested, correct) != 0)

#define mu_assert_eq(message, tested, correct) \
	mu_assert(message, tested == correct)

#define mu_assert_neq(message, tested, correct) \
	mu_assert(message, tested != correct)

#define mu_assert_gt(message, tested, correct) \
	mu_assert(message, tested > correct)

#define mu_assert_ge(message, tested, correct) \
	mu_assert(message, tested >= correct)

#define mu_assert_lt(message, tested, correct) \
	mu_assert(message, tested < correct)

#define mu_assert_le(message, tested, correct) \
	mu_assert(message, tested <= correct)

#define mu_run_test(test) do { char *message = test(); mu_tests_run++; \
			  if (message) return message; } while (0)
extern int mu_tests_run;

#endif // MINUNIT_H
