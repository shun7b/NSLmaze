# NSLmaze
16*16マスの迷路の回路（FPGAの並列アルゴリズム）
https://ieeexplore.ieee.org/document/9501483<br>
make <br>
make clean<br>
nslcoreとiverilog必須<br>
add_map.nslが1コアになって９８コア(並列)で動く(add_all.nsl)<br>
詳しい設計はPDFとc言語（並列化していない。アルゴリズム検証用）で確認できる。。
