(def *letters* "ABCDEFGHIJKLMNOPQRSTUVWXYZ")

(def char2num
  (apply hash-map (interleave *letters* (iterate inc 1))))

(defn letterscore [s]
  "Returns the score of the letters in the strin s"
  (reduce + (map #(char2num %) s)))

(defn get-names [f]
  (re-seq #"\w+" f))

(defn name-scores [file]
  (let [names (sort (get-names (slurp file)))]
    (reduce + (map * (map letterscore names)
                   (iterate inc 1)))))

(println "Answer: " (name-scores "names.txt"))
