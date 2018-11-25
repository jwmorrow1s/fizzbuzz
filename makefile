fizzbuzz = impls/fizzbuzz.c
main = src/main.c
test = tests/main.c
app: ${main}
	gcc -o app ${main} ${fizzbuzz} -I modules
clean:
	rm app && rm test1
tests: ${test}
	gcc -o test1 ${test} ${fizzbuzz} -I modules
run:
	@bash scripts/run.sh ${n}
