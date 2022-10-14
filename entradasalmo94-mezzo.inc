\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble"
		\key f \major

		r4. r8 r c'  |
		a' 8 a' a' bes' a' g'  |
		a' 8 f' 8. f' 16 g' 8. f' 16 e' 8  |
		f' 8 c' c' c' f' 8. e' 16  |
%% 5
		f' 4. r8 c' c'  |
		a' 8 a' a' bes' a' g'  |
		a' 8 f' 8. r16 g' 8. f' 16 e' 8  |
		f' 8 c' c' c' f' e'  |
		f' 4. r8 f' e'  |
%% 10
		d' 4. f' 4 f' 8  |
		g' 4. r8 f' ( g' )  |
		a' 4. g' 4 g' 8  |
		f' 4. r8 d' e'  |
		f' 8 f' f' f' d' e'  |
%% 15
		f' 8 f' f' f' 4 r8  |
		f' 8 f' f' f' d' f'  |
		e' 2.  |
		r4. r8 r c'  |
		a' 8 a' a' 16 a' a' 8 a' f'  |
%% 20
		g' 4 f' 8 c' r c' 16 c'  |
		a' 8 a' a' a' 4 -\staccato f' 8  |
		g' 4 f' 8 c' r c'  |
		a' 8 a' a' bes' a' g'  |
		a' 8 f' 8. f' 16 g' 8. f' 16 e' 8  |
%% 25
		f' 8 c' c' c' f' 8. e' 16  |
		f' 4. r8 c' c'  |
		a' 8 a' a' bes' a' g'  |
		a' 8 f' 8. r16 g' 8. f' 16 e' 8  |
		f' 8 c' c' c' f' e'  |
%% 30
		f' 4. r8 f' e'  |
		d' 4 d' 8 f' 4 f' 8  |
		g' 4. r8 f' g'  |
		a' 4. g' 4 g' 8  |
		f' 8 d' 4 r8 d' e'  |
%% 35
		f' 8 f' f' f' d' e'  |
		f' 8 f' f' f' 4 r8  |
		f' 4. d' 4 f' 8  |
		g' 2.  |
		r4. r8 r c'  |
%% 40
		a' 8 a' a' 16 a' a' 8 a' f'  |
		g' 4 f' 8 c' r c' 16 c'  |
		a' 8 a' a' a' 4 -\staccato f' 8  |
		g' 4 f' 8 c' r c'  |
		a' 8 a' a' bes' a' g'  |
%% 45
		a' 8 f' 8. f' 16 g' 8. f' 16 e' 8  |
		f' 8 c' c' c' f' 8. e' 16  |
		f' 4. r8 c' c'  |
		a' 8 a' a' bes' a' g'  |
		a' 8 f' 8. r16 g' 8. f' 16 e' 8  |
%% 50
		f' 8 c' c' c' f' e'  |
		f' 4. r  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-mezzo" {
		Can -- te -- mos un can -- to de glo -- ria
		a Dios po -- de -- ro -- so, nues -- tro sal -- va -- dor.
		Con ac -- cio -- nes de gra -- cias en -- tre -- mos
		a su san -- tua -- "rio a" ren -- dir -- le ho -- nor.

		Por -- que Él es Yah -- vé,
		rey __ gran -- "de y" Se -- ñor.
		En sus ma -- nos es -- tá to -- da la cre -- a -- ción,
		to -- do fue he -- cho por Él.

		En -- tre -- mos, a -- do -- re -- mos, pos -- tré -- mo -- nos,
		a -- la -- be -- mos a Dios, nues -- tro crea -- dor.

		Can -- te -- mos un can -- to de glo -- ria
		a Dios po -- de -- ro -- so, nues -- tro sal -- va -- dor.
		Con a -- ccio -- nes de gra -- cias en -- tre -- mos
		a su san -- tua -- "rio a" ren -- dir -- le ho -- nor.

		Por -- que Él es nues -- tro Dios
		y no -- so -- tros su pue -- blo,
		el re -- ba -- ño "que Él" guí -- a a la sal -- va -- ción;
		¡glo -- "ria a" Yah -- vé!

		En -- tre -- mos, a -- do -- re -- mos, pos -- tré -- mo -- nos,
		a -- la -- be -- mos a Dios, nues -- tro crea -- dor.

		Can -- te -- mos un can -- to de glo -- ria
		a Dios po -- de -- ro -- so, nues -- tro sal -- va -- dor.
		Con a -- ccio -- nes de gra -- cias en -- tre -- mos
		a su san -- tua -- "rio a" ren -- dir -- le ho -- nor.
	}
>>
