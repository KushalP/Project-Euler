-module(problem3).
-import(math).
-compile(export_all).

solution(N) ->
    Greatest = factor(1, N),
    io:format("Answer: ~w~n", [Greatest]).

factor(Greatestsofar, N) ->
    Max = math:sqrt(N),
    Factor = nextfactor(Max, 2, N),
    if
        Factor > Greatestsofar ->
            Newgreatest = Factor;
        true ->
            Newgreatest = Greatestsofar
    end,
    Cofactor = round(N / Factor),
    io:format("Factor ~w~n", [Factor]),
    if
        Cofactor == 1 ->
            Newgreatest;
        true ->
            factor(Newgreatest, Cofactor)
    end.

nextfactor(Max, X, N) ->
    if
        N rem X == 0 ->
            X;
        X =< Max ->
            nextfactor(Max, X+1, N);
        true ->
            N
    end.
