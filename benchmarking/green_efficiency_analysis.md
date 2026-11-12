# Green Efficiency Analysis

## Measurement Methodology
I tested the performance of C programs by measuring how long they took to complete their tasks. The baseline loop ran 100 million iterations three times. I also compared a naive algorithm with a single-pass algorithm using a dataset of 50,000 elements. Each algorithm was tested three times to check whether the results were consistent.

The instrumentation program used clock() to measure CPU time for three stages: building the dataset, processing the data, and calculating a checksum. This helped show how different parts of a program could be measured separately.

## Observed Performance Differences
The baseline loop recorded execution times of 0.219932, 0.220708, and 0.221327 seconds, giving an average of approximately 0.220656 seconds. The small differences between runs suggest that the results were consistent.
The naive algorithm took an average of 2.673608 seconds, while the single-pass algorithm took approximately 0.000103 seconds. The recorded comparison showed that the naive algorithm was about 26,000 times slower.
These results show a large difference in execution time. However, the algorithms produced different outputs: 625025000 and 25000. Therefore, I cannot confirm that both algorithms performed exactly the same task.

## Relation Between Runtime and Energy Consumption
The first article explains that software uses energy when running on computer hardware. Programs that take longer to complete may use more energy because the processor remains active for longer.
My measurements showed that the single-pass algorithm completed much faster than the naive algorithm. This suggests that choosing a more efficient algorithm could help reduce energy consumption.
However, I only measured execution time, not electricity usage. Therefore, I cannot confirm how much energy was saved or whether carbon emissions were reduced.

## Limitations of the Experiment
One limitation was that each benchmark was repeated only three times. More runs would provide stronger evidence of consistent performance.
Another limitation was that the algorithms were tested using only one dataset size. Testing different sizes would help explain how execution time changes as the amount of data increases.
The experiment also did not measure CPU power consumption or carbon emissions.

## Practical Engineering Takeaway
This experiment helped me understand why algorithm efficiency matters in software development. The results showed that different approaches can have very different execution times.
Big O analysis helps explain how algorithms scale, while benchmarking shows their actual performance. Both are useful when choosing an approach.
Overall, developers should measure performance, check that algorithms produce the correct results, and avoid unnecessary computation. This can improve software efficiency and may also reduce environmental impact.
