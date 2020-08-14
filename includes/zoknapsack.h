#ifndef _ZERO_ONE_KNAPSACK_SOLVING_H
#define _ZERO_ONE_KNAPSACK_SOLVING_H

#define InitZeroOneSolve(type1) \
	typedef type1 (*Function_Loading)(type1, type1); \
	type1 ZeroOneSolve_##type1(type1 _N, type1 _M, type1* _Result, type1* _Value, type1* _Weight, Function_Loading func) { \
		_Result[0] = 0; \
		for (type1 i = 0; i < _N; i++) { \
			for (type1 j = _N; j >= _Value[i]; j--) { \
				_Result[j] = func(_Result[j], _Result[j-_Value[i]]+_Value[i]*_Weight[i]); \
			} \
		} \
		return _Result[_N]; \
	}

#endif // _ZERO_ONE_KNAPSACK_SOLVING_H
