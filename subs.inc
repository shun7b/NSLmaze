declare subs{
	input data_in17[BIT],data_in19[BIT],data_in21[BIT],data_in23[BIT],data_in25[BIT],data_in27[BIT],data_in29[BIT],
data_in33[BIT],data_in35[BIT],data_in37[BIT],data_in39[BIT],data_in41[BIT],data_in43[BIT],data_in45[BIT],
data_in49[BIT],data_in51[BIT],data_in53[BIT],data_in55[BIT],data_in57[BIT],data_in59[BIT],data_in61[BIT],
data_in65[BIT],data_in67[BIT],data_in69[BIT],data_in71[BIT],data_in73[BIT],data_in75[BIT],data_in77[BIT],
data_in81[BIT],data_in83[BIT],data_in85[BIT],data_in87[BIT],data_in89[BIT],data_in91[BIT],data_in93[BIT],
data_in97[BIT],data_in99[BIT],data_in101[BIT],data_in103[BIT],data_in105[BIT],data_in107[BIT],data_in109[BIT],
data_in113[BIT],data_in115[BIT],data_in117[BIT],data_in119[BIT],data_in121[BIT],data_in123[BIT],data_in125[BIT],
data_in129[BIT],data_in131[BIT],data_in133[BIT],data_in135[BIT],data_in137[BIT],data_in139[BIT],data_in141[BIT],
data_in145[BIT],data_in147[BIT],data_in149[BIT],data_in151[BIT],data_in153[BIT],data_in155[BIT],data_in157[BIT],
data_in161[BIT],data_in163[BIT],data_in165[BIT],data_in167[BIT],data_in169[BIT],data_in171[BIT],data_in173[BIT],
data_in177[BIT],data_in179[BIT],data_in181[BIT],data_in183[BIT],data_in185[BIT],data_in187[BIT],data_in189[BIT],
data_in193[BIT],data_in195[BIT],data_in197[BIT],data_in199[BIT],data_in201[BIT],data_in203[BIT],data_in205[BIT],
data_in209[BIT],data_in211[BIT],data_in213[BIT],data_in215[BIT],data_in217[BIT],data_in219[BIT],data_in221[BIT],
data_in225[BIT],data_in227[BIT],data_in229[BIT],data_in231[BIT],data_in233[BIT],data_in235[BIT],data_in237[BIT],
data_index17[BIT],data_index19[BIT],data_index21[BIT],data_index23[BIT],data_index25[BIT],data_index27[BIT],data_index29[BIT],
data_index33[BIT],data_index35[BIT],data_index37[BIT],data_index39[BIT],data_index41[BIT],data_index43[BIT],data_index45[BIT],
data_index49[BIT],data_index51[BIT],data_index53[BIT],data_index55[BIT],data_index57[BIT],data_index59[BIT],data_index61[BIT],
data_index65[BIT],data_index67[BIT],data_index69[BIT],data_index71[BIT],data_index73[BIT],data_index75[BIT],data_index77[BIT],
data_index81[BIT],data_index83[BIT],data_index85[BIT],data_index87[BIT],data_index89[BIT],data_index91[BIT],data_index93[BIT],
data_index97[BIT],data_index99[BIT],data_index101[BIT],data_index103[BIT],data_index105[BIT],data_index107[BIT],data_index109[BIT],
data_index113[BIT],data_index115[BIT],data_index117[BIT],data_index119[BIT],data_index121[BIT],data_index123[BIT],data_index125[BIT],
data_index129[BIT],data_index131[BIT],data_index133[BIT],data_index135[BIT],data_index137[BIT],data_index139[BIT],data_index141[BIT],
data_index145[BIT],data_index147[BIT],data_index149[BIT],data_index151[BIT],data_index153[BIT],data_index155[BIT],data_index157[BIT],
data_index161[BIT],data_index163[BIT],data_index165[BIT],data_index167[BIT],data_index169[BIT],data_index171[BIT],data_index173[BIT],
data_index177[BIT],data_index179[BIT],data_index181[BIT],data_index183[BIT],data_index185[BIT],data_index187[BIT],data_index189[BIT],
data_index193[BIT],data_index195[BIT],data_index197[BIT],data_index199[BIT],data_index201[BIT],data_index203[BIT],data_index205[BIT],
data_index209[BIT],data_index211[BIT],data_index213[BIT],data_index215[BIT],data_index217[BIT],data_index219[BIT],data_index221[BIT],
data_index225[BIT],data_index227[BIT],data_index229[BIT],data_index231[BIT],data_index233[BIT],data_index235[BIT],data_index237[BIT];
	output sub_array_out[BIT];
	func_in subs_exe(
                    
data_index17,data_index19,data_index21,data_index23,data_index25,data_index27,data_index29,
data_index33,data_index35,data_index37,data_index39,data_index41,data_index43,data_index45,
data_index49,data_index51,data_index53,data_index55,data_index57,data_index59,data_index61,
data_index65,data_index67,data_index69,data_index71,data_index73,data_index75,data_index77,
data_index81,data_index83,data_index85,data_index87,data_index89,data_index91,data_index93,
data_index97,data_index99,data_index101,data_index103,data_index105,data_index107,data_index109,
data_index113,data_index115,data_index117,data_index119,data_index121,data_index123,data_index125,
data_index129,data_index131,data_index133,data_index135,data_index137,data_index139,data_index141,
data_index145,data_index147,data_index149,data_index151,data_index153,data_index155,data_index157,
data_index161,data_index163,data_index165,data_index167,data_index169,data_index171,data_index173,
data_index177,data_index179,data_index181,data_index183,data_index185,data_index187,data_index189,
data_index193,data_index195,data_index197,data_index199,data_index201,data_index203,data_index205,
data_index209,data_index211,data_index213,data_index215,data_index217,data_index219,data_index221,
data_index225,data_index227,data_index229,data_index231,data_index233,data_index235,data_index237,

data_in17,data_in19,data_in21,data_in23,data_in25,data_in27,data_in29,
data_in33,data_in35,data_in37,data_in39,data_in41,data_in43,data_in45,
data_in49,data_in51,data_in53,data_in55,data_in57,data_in59,data_in61,
data_in65,data_in67,data_in69,data_in71,data_in73,data_in75,data_in77,
data_in81,data_in83,data_in85,data_in87,data_in89,data_in91,data_in93,
data_in97,data_in99,data_in101,data_in103,data_in105,data_in107,data_in109,
data_in113,data_in115,data_in117,data_in119,data_in121,data_in123,data_in125,
data_in129,data_in131,data_in133,data_in135,data_in137,data_in139,data_in141,
data_in145,data_in147,data_in149,data_in151,data_in153,data_in155,data_in157,
data_in161,data_in163,data_in165,data_in167,data_in169,data_in171,data_in173,
data_in177,data_in179,data_in181,data_in183,data_in185,data_in187,data_in189,
data_in193,data_in195,data_in197,data_in199,data_in201,data_in203,data_in205,
data_in209,data_in211,data_in213,data_in215,data_in217,data_in219,data_in221,
data_in225,data_in227,data_in229,data_in231,data_in233,data_in235,data_in237);
}
