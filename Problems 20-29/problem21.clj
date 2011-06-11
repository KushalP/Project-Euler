(defn proper-divisors [n]
  (filter #(zero? (mod n %))
          (range 1 (+ 1 (/ n 2)))))

(defn amicable-to [n]
  (reduce + (proper-divisors n)))

(defn amicable? [n]
  (let [m (amicable-to n)]
    (and (not (= n m))
         (= n (amicable-to m)))))

(println "Answer: " (reduce + (filter amicable? (range 1 10000))))
