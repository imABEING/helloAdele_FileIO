<CsoundSynthesizer>
<CsInstruments>
instr testing
 a1 diskin2 "HelloAdele.wav", p5
 k1 linen 1, .2, p3, .3
 out a1 * k1
endin
</CsInstruments>
<CsScore>
i "testing" 0 14 0 1 
e 14
</CsScore>
</CsoundSynthesizer>
