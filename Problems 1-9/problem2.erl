-module(problem2).
-compile(export_all).

solution(0) -> 0;
solution(1) -> 0;
solution(2) -> 2;
solution(N) when N > 2 ->
    fib(1, 2, 2, N).

fib(Fib1, Fib2, Acc, Max) ->
    Fib = Fib1 + Fib2,
    case Fib > Max of
        true ->
            Acc;
        _ when Fib rem 2 =:= 0 ->
            fib(Fib2, Fib, Acc + Fib, Max);
        _ ->
            fib(Fib2, Fib, Acc, Max)
    end.
