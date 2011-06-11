(def days-per-month      [31 28 31 30 31 30 31 31 30 31 30 31])
(def days-per-month-leap [31 29 31 30 31 30 31 31 30 31 30 31])

(defn leap-year? [year]
  "Returns whether a given year is a leap year or not"
  (or (zero? (mod year 400))
      (and (zero? (mod year 4))
           (not (zero? (mod year 100))))))

(defn sum-seq [s]
  "Returns a seq of the sums of elements up to each element in s"
  (loop [e (first s)
         r (rest s)
         sums [0]]
    (if (nil? e)
      (rest sums)
      (recur (first r) (rest r) (conj sums (+ e (last sums)))))))

;; NB: Any number with A % 7 must be Monday, IF we start on a Monday
(defn count-mondays []
  (count (filter #(= 0 (mod % 7))
                 (sum-seq (concat [366] ;; skips the year 1900
                                (mapcat #(if (leap-year? %)
                                           days-per-month-leap
                                           days-per-month)
                                        (range 1901 2001)))))))

(println "Answer: " (count-mondays))
