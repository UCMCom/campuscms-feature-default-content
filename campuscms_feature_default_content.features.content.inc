<?php
/**
 * @file
 * campuscms_feature_default_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function campuscms_feature_default_content_content_defaults() {
$content = array();
$content['sample-page'] = (object)array(
  'exported_path' => 'content/sample-page',
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/sample-page',
    'router_path' => 'node/%',
    'link_title' => 'This is a page',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'identifier' => 'main-menu:node-name/sample-page',
  ),
  'title' => 'Sample Page',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1323190706',
  'comment' => '0',
  'translate' => '0',
  'machine_name' => 'sample-page',
  'field_page_body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2><img alt="Test" src="http://localhost:8888/campuscms/sites/default/files/page/images/ffffff.png" title="test" height="250" width="500"></h2>
<h2>Header 2</h2>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
<h3>Header 3</h3>
<p>Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
<h4>Header 4</h4>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. <em>Donec</em> risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
<ol>
	<li>Apple</li>
	<li>Facebook</li>
	<li>Twitter</li>
	<li>Google</li>
	<li>Path</li>
</ol>
<p>This is a some <strong>text</strong>.</p>
<ul>
	<li>Casino</li>
	<li>Godfather</li>
	<li>Goodfellas</li>
	<li>The Dark Knight</li>
</ul>
<hr>
<p>&nbsp;</p>
<table style="width: 500px; height: 128px;" border="1" cellpadding="1" cellspacing="1">
	<thead>
		<tr>
			<th scope="col">Header</th>
			<th scope="col">Number</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>
				<p>One</p>
			</td>
			<td>1.01</td>
		</tr>
		<tr>
			<td>Three</td>
			<td>2.02</td>
		</tr>
	</tbody>
</table>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<h2><img alt="Test" src="http://localhost:8888/campuscms/sites/default/files/page/images/ffffff.png" title="test" height="250" width="500" /></h2>
<h2>Header 2</h2>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
<h3>Header 3</h3>
<p>Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
<h4>Header 4</h4>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. <em>Donec</em> risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
<ol><li>Apple</li>
<li>Facebook</li>
<li>Twitter</li>
<li>Google</li>
<li>Path</li>
</ol><p>This is a some <strong>text</strong>.</p>
<ul><li>Casino</li>
<li>Godfather</li>
<li>Goodfellas</li>
<li>The Dark Knight</li>
</ul><p> </p>
<table border="1" cellpadding="1" cellspacing="1"><tr><th scope="col">Header</th>
<th scope="col">Number</th>
</tr><tbody><tr><td>
				One
			</td>
<td>1.01</td>
</tr><tr><td>Three</td>
<td>2.02</td>
</tr></tbody></table><p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Vivamus vitae risus vitae lorem iaculis placerat. Aliquam sit amet felis. Etiam congue. Donec risus risus, pretium ac, tincidunt eu, tempor eu, quam. Morbi blandit mollis magna. Suspendisse eu tortor.</p>
',
      ),
    ),
  ),
  'field_page_image' => array(
    'und' => array(
      0 => array(
        'alt' => 'Test',
        'title' => 'test',
        'width' => '500',
        'height' => '250',
        'filename' => 'ffffff.png',
        'uri' => 'public://ffffff.png',
        'filemime' => 'image/png',
        'filesize' => '1418',
        'status' => '1',
        'rdf_mapping' => array(),
        'image' => '�PNG

' . "\0" . '' . "\0" . '' . "\0" . '
]���D��������$b���D�""�����e:T��q�A�M�����^6�� �`�G���]����K�\'�x�s�?d��~v�.W�����������Q����˪�K�#:��ɫ�N�g��#]N���F\'f鵭�ݸ-ܥO�o�[5-[�).�F�޴��i�0���|���\\���#7vg�7ӱl��̒�/*�eS�n�Lۄإou7�N�0���m�9}��?
��,y��\'io������_s�~<�9	!MyJ��[�;��n^�_�Yz5^jU�i��m<4lo��lojq���%W���(}��U�o�᭄����m8��ھrӛ�%k��_�� ����H\'���4�����yX��zg��4W�Q�9k6$ȋ�ͻ4EG��h�t������X��685�߶�ͩ˓�li�+��N%Kv����*2�k��^�dێ�jY�g�瑥�j�lU��L��Ȥ�UKï?���k
�\'���\\�.,��P3����X�#�.��ۗe�Ƹn<�ox�������F�ΐ�"K����:3��;.����H���x��۰�|z���
      ),
    ),
  ),
);
return $content;
}