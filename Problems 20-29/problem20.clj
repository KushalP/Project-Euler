(defn factorial [n]
  (reduce * (range 2 (inc n))))

(defn sum-digits [s]
  (reduce + (map #(Integer/parseInt (str %)) s)))

(println "Answer: " (sum-digits (str (factorial 100))))
