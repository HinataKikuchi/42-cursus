Creator	"yFiles"
Version	"2.17"
graph
[
	hierarchic	1
	label	""
	directed	1
	node
	[
		id	0
		label	"    void write_character(va_list ap, t_format *x)"
		graphics
		[
			x	491.75
			y	580.37060546875
			w	983.5
			h	1160.7412109375
			type	"rectangle"
			fill	"#EEEEEE"
			outline	"#000000"
			topBorderInset	0.0
			bottomBorderInset	0.0
			leftBorderInset	0.0
			rightBorderInset	0.0
		]
		LabelGraphics
		[
			text	"    void write_character(va_list ap, t_format *x)"
			fontSize	14
			fontName	"Meiryo UI"
			alignment	"left"
			anchor	"tl"
			borderDistance	0.0
		]
		isGroup	1
	]
	node
	[
		id	1
		label	"START"
		graphics
		[
			x	219.19246031746033
			y	1125.7412109375
			w	140.0
			h	40.0
			customconfiguration	"com.yworks.flowchart.terminator"
			fill	"#FFFFFF"
			outline	"#000000"
		]
		LabelGraphics
		[
			text	"START"
			fontSize	11
			fontName	"Meiryo UI"
			autoSizePolicy	"node_width"
			anchor	"c"
		]
		gid	0
	]
	node
	[
		id	2
		label	"char	c"
		graphics
		[
			x	219.19246031746033
			y	1041.7412109375
			w	100.0
			h	20.0
			customconfiguration	"com.yworks.flowchart.process"
			fill	"#FFFFAA"
			outline	"#000000"
		]
		LabelGraphics
		[
			text	"char	c"
			fontSize	11
			fontName	"Meiryo UI"
			autoSizePolicy	"node_width"
			anchor	"c"
		]
		gid	0
	]
	node
	[
		id	3
		label	"x->word_count = 0"
		graphics
		[
			x	219.19246031746033
			y	967.7412109375
			w	150.5
			h	20.0
			customconfiguration	"com.yworks.flowchart.process"
			fill	"#FFFFFF"
			outline	"#000000"
		]
		LabelGraphics
		[
			text	"x->word_count = 0"
			fontSize	11
			fontName	"Meiryo UI"
			autoSizePolicy	"node_width"
			anchor	"c"
		]
		gid	0
	]
	node
	[
		id	4
		label	"c = '%'"
		graphics
		[
			x	219.19246031746033
			y	893.7412109375
			w	100.0
			h	20.0
			customconfiguration	"com.yworks.flowchart.process"
			fill	"#FFFFFF"
			outline	"#000000"
		]
		LabelGraphics
		[
			text	"c = '%'"
			fontSize	11
			fontName	"Meiryo UI"
			autoSizePolicy	"node_width"
			anchor	"c"
		]
		gid	0
	]
	node
	[
		id	5
		label	"x->format_char != '%'"
		graphics
		[
			x	219.19246031746033
			y	809.7412109375
			w	333.0
			h	40.0
			customconfiguration	"com.yworks.flowchart.decision"
			fill	"#FFFFFF"
			outline	"#000000"
		]
		LabelGraphics
		[
			text	"x->format_char != '%'"
			fontSize	11
			fontName	"Meiryo UI"
			autoSizePolicy	"node_width"
			anchor	"c"
		]
		gid	0
	]
	node
	[
		id	6
		label	"c = va_arg(ap, int)"
		graphics
		[
			x	195.68253968253967
			y	705.880859375
			w	163.5
			h	20.0
			customconfiguration	"com.yworks.flowchart.predefinedProcess"
			fill	"#FFFFFF"
			outline	"#000000"
		]
		LabelGraphics
		[
			text	"c = va_arg(ap, int)"
			fontSize	11
			fontName	"Meiryo UI"
			autoSizePolicy	"node_width"
			anchor	"c"
		]
		gid	0
	]
	node
	[
		id	7
		label	""
		graphics
		[
			x	233.625
			y	631.7607421875
			w	1.0
			h	1.0
			customconfiguration	"com.yworks.flowchart.start2"
			fill	"#000000"
			outline	"#000000"
		]
		LabelGraphics
		[
		]
		gid	0
	]
	node
	[
		id	8
		label	"x->minus_flag"
		graphics
		[
			x	233.625
			y	557.2607421875
			w	274.5
			h	40.0
			customconfiguration	"com.yworks.flowchart.decision"
			fill	"#FFFFFF"
			outline	"#000000"
		]
		LabelGraphics
		[
			text	"x->minus_flag"
			fontSize	11
			fontName	"Meiryo UI"
			autoSizePolicy	"node_width"
			anchor	"c"
		]
		gid	0
	]
	node
	[
		id	9
		label	"x->word_count += write(1, &amp;c, 1)"
		graphics
		[
			x	165.0
			y	448.0205078125
			w	248.0
			h	20.0
			customconfiguration	"com.yworks.flowchart.predefinedProcess"
			fill	"#FFFFFF"
			outline	"#000000"
		]
		LabelGraphics
		[
			text	"x->word_count += write(1, &amp;c, 1)"
			fontSize	11
			fontName	"Meiryo UI"
			autoSizePolicy	"node_width"
			anchor	"c"
		]
		gid	0
	]
	node
	[
		id	10
		label	"x->word_count += write_blank(x->min - 1)"
		graphics
		[
			x	165.0
			y	348.7802734375
			w	300.0
			h	20.0
			customconfiguration	"com.yworks.flowchart.predefinedProcess"
			fill	"#FFFFFF"
			outline	"#000000"
		]
		LabelGraphics
		[
			text	"x->word_count += write_blank(x->min - 1)"
			fontSize	11
			fontName	"Meiryo UI"
			autoSizePolicy	"node_width"
			anchor	"c"
		]
		gid	0
	]
	node
	[
		id	11
		label	"return "
		graphics
		[
			x	165.0
			y	274.7802734375
			w	100.0
			h	20.0
			customconfiguration	"com.yworks.flowchart.process"
			fill	"#FFFFFF"
			outline	"#000000"
		]
		LabelGraphics
		[
			text	"return "
			fontSize	11
			fontName	"Meiryo UI"
			autoSizePolicy	"node_width"
			anchor	"c"
		]
		gid	0
	]
	node
	[
		id	12
		label	"x->zero_flag"
		graphics
		[
			x	558.75
			y	448.0205078125
			w	268.0
			h	40.0
			customconfiguration	"com.yworks.flowchart.decision"
			fill	"#FFFFFF"
			outline	"#000000"
		]
		LabelGraphics
		[
			text	"x->zero_flag"
			fontSize	11
			fontName	"Meiryo UI"
			autoSizePolicy	"node_width"
			anchor	"c"
		]
		gid	0
	]
	node
	[
		id	13
		label	"x->word_count += write_zero(x->min - 1)"
		graphics
		[
			x	491.75
			y	348.7802734375
			w	293.5
			h	20.0
			customconfiguration	"com.yworks.flowchart.predefinedProcess"
			fill	"#FFFFFF"
			outline	"#000000"
		]
		LabelGraphics
		[
			text	"x->word_count += write_zero(x->min - 1)"
			fontSize	11
			fontName	"Meiryo UI"
			autoSizePolicy	"node_width"
			anchor	"c"
		]
		gid	0
	]
	node
	[
		id	14
		label	"x->word_count += write_blank(x->min - 1)"
		graphics
		[
			x	818.5
			y	348.7802734375
			w	300.0
			h	20.0
			customconfiguration	"com.yworks.flowchart.predefinedProcess"
			fill	"#FFFFFF"
			outline	"#000000"
		]
		LabelGraphics
		[
			text	"x->word_count += write_blank(x->min - 1)"
			fontSize	11
			fontName	"Meiryo UI"
			autoSizePolicy	"node_width"
			anchor	"c"
		]
		gid	0
	]
	node
	[
		id	15
		label	""
		graphics
		[
			x	492.0
			y	274.7802734375
			w	1.0
			h	1.0
			customconfiguration	"com.yworks.flowchart.start2"
			fill	"#000000"
			outline	"#000000"
		]
		LabelGraphics
		[
		]
		gid	0
	]
	node
	[
		id	16
		label	"x->word_count += write(1, &amp;c, 1)"
		graphics
		[
			x	492.0
			y	200.7802734375
			w	248.0
			h	20.0
			customconfiguration	"com.yworks.flowchart.predefinedProcess"
			fill	"#FFFFFF"
			outline	"#000000"
		]
		LabelGraphics
		[
			text	"x->word_count += write(1, &amp;c, 1)"
			fontSize	11
			fontName	"Meiryo UI"
			autoSizePolicy	"node_width"
			anchor	"c"
		]
		gid	0
	]
	node
	[
		id	17
		label	""
		graphics
		[
			x	328.5
			y	131.2802734375
			w	1.0
			h	1.0
			customconfiguration	"com.yworks.flowchart.start2"
			fill	"#000000"
			outline	"#000000"
		]
		LabelGraphics
		[
		]
		gid	0
	]
	node
	[
		id	18
		label	"END"
		graphics
		[
			x	328.5
			y	56.7802734375
			w	140.0
			h	40.0
			customconfiguration	"com.yworks.flowchart.terminator"
			fill	"#FFFFFF"
			outline	"#000000"
		]
		LabelGraphics
		[
			text	"END"
			fontSize	11
			fontName	"Meiryo UI"
			autoSizePolicy	"node_width"
			anchor	"c"
		]
		gid	0
	]
	edge
	[
		source	1
		target	2
		label	""
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
		]
		edgeAnchor
		[
			ySource	-1.0
			yTarget	1.0
		]
		LabelGraphics
		[
		]
	]
	edge
	[
		source	2
		target	3
		label	""
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
		]
		edgeAnchor
		[
			ySource	-1.0
			yTarget	1.0
		]
		LabelGraphics
		[
		]
	]
	edge
	[
		source	3
		target	4
		label	""
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
		]
		edgeAnchor
		[
			ySource	-1.0
			yTarget	1.0
		]
		LabelGraphics
		[
		]
	]
	edge
	[
		source	4
		target	5
		label	""
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
		]
		edgeAnchor
		[
			ySource	-1.0
			yTarget	1.0
		]
		LabelGraphics
		[
		]
	]
	edge
	[
		source	5
		target	6
		label	"Yes"
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
			Line
			[
				point
				[
					x	219.19246031746033
					y	809.7412109375
				]
				point
				[
					x	135.94246031746033
					y	779.7412109375
				]
				point
				[
					x	195.68253968253967
					y	779.7412109375
				]
				point
				[
					x	195.68253968253967
					y	705.880859375
				]
			]
		]
		edgeAnchor
		[
			xSource	-0.5
			ySource	-0.5015625
			yTarget	1.0
		]
		LabelGraphics
		[
			text	"Yes"
			fontSize	12
			fontName	"Meiryo UI"
			model	"six_pos"
			position	"head"
		]
	]
	edge
	[
		source	5
		target	7
		label	"No"
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
			Line
			[
				point
				[
					x	219.19246031746033
					y	809.7412109375
				]
				point
				[
					x	302.4424603174603
					y	654.2607421875
				]
				point
				[
					x	233.875
					y	654.2607421875
				]
				point
				[
					x	233.625
					y	631.7607421875
				]
			]
		]
		edgeAnchor
		[
			xSource	0.5000000000000002
			ySource	-0.4984375
			xTarget	0.5
			yTarget	1.0
		]
		LabelGraphics
		[
			text	"No"
			fontSize	12
			fontName	"Meiryo UI"
			model	"six_pos"
			position	"head"
		]
	]
	edge
	[
		source	6
		target	7
		label	""
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
			Line
			[
				point
				[
					x	195.68253968253967
					y	705.880859375
				]
				point
				[
					x	195.68253968253967
					y	647.2607421875
				]
				point
				[
					x	233.375
					y	647.2607421875
				]
				point
				[
					x	233.625
					y	631.7607421875
				]
			]
		]
		edgeAnchor
		[
			ySource	-1.0
			xTarget	-0.5
			yTarget	1.0
		]
		LabelGraphics
		[
		]
	]
	edge
	[
		source	7
		target	8
		label	""
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
		]
		edgeAnchor
		[
			ySource	-1.0
			yTarget	1.0
		]
		LabelGraphics
		[
		]
	]
	edge
	[
		source	8
		target	9
		label	"Yes"
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
		]
		edgeAnchor
		[
			xSource	-0.5
			ySource	-0.5015625
			yTarget	1.0
		]
		LabelGraphics
		[
			text	"Yes"
			fontSize	12
			fontName	"Meiryo UI"
			model	"six_pos"
			position	"head"
		]
	]
	edge
	[
		source	8
		target	12
		label	"No"
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
			Line
			[
				point
				[
					x	233.625
					y	557.2607421875
				]
				point
				[
					x	302.25
					y	527.2607421875
				]
				point
				[
					x	558.75
					y	527.2607421875
				]
				point
				[
					x	558.75
					y	448.0205078125
				]
			]
		]
		edgeAnchor
		[
			xSource	0.5
			ySource	-0.4984375
			yTarget	1.0
		]
		LabelGraphics
		[
			text	"No"
			fontSize	12
			fontName	"Meiryo UI"
			model	"six_pos"
			position	"thead"
		]
	]
	edge
	[
		source	9
		target	10
		label	""
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
		]
		edgeAnchor
		[
			ySource	-1.0
			yTarget	1.0
		]
		LabelGraphics
		[
		]
	]
	edge
	[
		source	10
		target	11
		label	""
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
		]
		edgeAnchor
		[
			ySource	-1.0
			yTarget	1.0
		]
		LabelGraphics
		[
		]
	]
	edge
	[
		source	11
		target	17
		label	""
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
			Line
			[
				point
				[
					x	165.0
					y	274.7802734375
				]
				point
				[
					x	165.0
					y	153.7802734375
				]
				point
				[
					x	328.25
					y	153.7802734375
				]
				point
				[
					x	328.5
					y	131.2802734375
				]
			]
		]
		edgeAnchor
		[
			ySource	-1.0
			xTarget	-0.5
			yTarget	1.0
		]
		LabelGraphics
		[
		]
	]
	edge
	[
		source	12
		target	13
		label	"Yes"
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
		]
		edgeAnchor
		[
			xSource	-0.5
			ySource	-0.5015625
			yTarget	1.0
		]
		LabelGraphics
		[
			text	"Yes"
			fontSize	12
			fontName	"Meiryo UI"
			model	"six_pos"
			position	"head"
		]
	]
	edge
	[
		source	12
		target	14
		label	"No"
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
			Line
			[
				point
				[
					x	558.75
					y	448.0205078125
				]
				point
				[
					x	625.75
					y	418.0205078125
				]
				point
				[
					x	818.5
					y	418.0205078125
				]
				point
				[
					x	818.5
					y	348.7802734375
				]
			]
		]
		edgeAnchor
		[
			xSource	0.5
			ySource	-0.4984375
			yTarget	1.0
		]
		LabelGraphics
		[
			text	"No"
			fontSize	12
			fontName	"Meiryo UI"
			model	"six_pos"
			position	"thead"
		]
	]
	edge
	[
		source	13
		target	15
		label	""
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
		]
		edgeAnchor
		[
			ySource	-1.0
			xTarget	-0.5
			yTarget	1.0
		]
		LabelGraphics
		[
		]
	]
	edge
	[
		source	14
		target	15
		label	""
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
			Line
			[
				point
				[
					x	818.5
					y	348.7802734375
				]
				point
				[
					x	818.5
					y	294.7802734375
				]
				point
				[
					x	492.25
					y	294.7802734375
				]
				point
				[
					x	492.0
					y	274.7802734375
				]
			]
		]
		edgeAnchor
		[
			ySource	-1.0
			xTarget	0.5
			yTarget	1.0
		]
		LabelGraphics
		[
		]
	]
	edge
	[
		source	15
		target	16
		label	""
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
		]
		edgeAnchor
		[
			ySource	-1.0
			yTarget	1.0
		]
		LabelGraphics
		[
		]
	]
	edge
	[
		source	16
		target	17
		label	""
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
			Line
			[
				point
				[
					x	492.0
					y	200.7802734375
				]
				point
				[
					x	492.0
					y	146.7802734375
				]
				point
				[
					x	328.75
					y	146.7802734375
				]
				point
				[
					x	328.5
					y	131.2802734375
				]
			]
		]
		edgeAnchor
		[
			ySource	-1.0
			xTarget	0.5
			yTarget	1.0
		]
		LabelGraphics
		[
		]
	]
	edge
	[
		source	17
		target	18
		label	""
		graphics
		[
			fill	"#000000"
			targetArrow	"standard"
		]
		edgeAnchor
		[
			ySource	-1.0
			yTarget	1.0
		]
		LabelGraphics
		[
		]
	]
]
