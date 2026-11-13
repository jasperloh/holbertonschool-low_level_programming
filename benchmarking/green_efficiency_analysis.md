# Green Efficiency Analysis

## Measurement Methodology

I measured how long three C programs took to run. The baseline loop completed 100 million iterations in each of three runs. I also compared a naive algorithm and a single-pass algorithm using 50,000 elements, repeating each test three times. Finally, the instrumentation program used `clock()` to measure CPU time spent building a dataset, processing its values, and calculating a checksum. I ran this program three times to compare the stages.

## Observed Performance Differences

The baseline loop took 0.219932, 0.220708, and 0.221327 seconds, averaging **0.220656 seconds**. The results were close together.

The naive algorithm took 2.673287, 2.669126, and 2.678410 seconds, averaging about **2.673608 seconds**. The single-pass algorithm took 0.000103, 0.000103, and 0.000102 seconds, averaging about **0.000103 seconds**. The naive algorithm was roughly **26,000 times slower** in these tests. However, the two algorithms returned different results (625025000 and 25000), so these measurements alone do not prove that the faster algorithm is an equivalent replacement.

The instrumentation program produced these results in three consecutive runs:

**Run 1**

- TOTAL seconds: 0.000767
- 1) BUILD_DATA seconds: 0.000315
- 2) PROCESS seconds: 0.000317
- 3) REDUCE seconds: 0.000135

**Run 2**

- TOTAL seconds: 0.000709
- 1) BUILD_DATA seconds: 0.000259
- 2) PROCESS seconds: 0.000319
- 3) REDUCE seconds: 0.000131

**Run 3**

- TOTAL seconds: 0.000782
- 1) BUILD_DATA seconds: 0.000265
- 2) PROCESS seconds: 0.000319
- 3) REDUCE seconds: 0.000198

The average total time was approximately **0.000753 seconds**. PROCESS was the longest stage in every run, averaging **0.000318 seconds**. It performs several arithmetic operations for each element, which may help explain its longer time. More repeated work can increase processing time. Small differences between runs may also come from background computer activity or CPU scheduling, although these causes were not measured.

## Relation Between Runtime and Energy Consumption

The green software article explains that running software uses energy. My results show large differences in execution time, especially between the naive and single-pass algorithms. A program that finishes sooner may use less energy because it needs less processing time. However, I measured CPU time, not electrical power or energy use. I therefore cannot calculate energy savings or carbon emissions from these results.

## Limitations of the Experiment

Each program was tested only three times, so more runs would give a stronger picture of performance. The algorithm comparison used only one dataset size, which is not enough to confirm how runtime grows as input size increases. The algorithms also returned different values, and their outputs need to be checked before making a fair comparison. The instrumentation measurements were very short, making timing overhead and measurement precision important. No power consumption was recorded.

## Practical Engineering Takeaway

This experiment showed me that program design can make a large difference to execution time. Big O analysis helps explain how work may grow with larger inputs, while timing tests show what happened in an actual run. Developers should check that algorithms give correct results, repeat measurements, and compare performance before making changes. Reducing unnecessary work can improve speed and may reduce energy use, but environmental benefits need separate measurements.

