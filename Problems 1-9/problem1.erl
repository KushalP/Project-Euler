-module(problem1).
-compile(export_all).

main() ->
    io:format("Answer: ~p~n", [solution(1000)]).

solution(N) ->
    sum(N, 3) + sum(N, 5) - sum(N, 15).

sum(N, Mult) ->
    X = (N - 1) div Mult,
    (Mult * X * (X + 1)) div 2.
